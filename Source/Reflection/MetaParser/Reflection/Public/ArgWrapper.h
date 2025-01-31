/**
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class ArgWrapper
 */

#include <any>
#include <tuple>

using std::size_t;

class ArgWrapper
{
public:
    template <typename T>
    ArgWrapper(T &&value)
    {
        refType = RefTrait<T>::value;
        isConst = IsConst<T>::value;

        if (refType == 1)
        {
            storage = &value;
        }
        else
        {
            storage = value;
        }
    }

    template <typename T>
    T Cast()
    {
        using RawT = std::remove_cv_t<std::remove_reference_t<T>>;
        constexpr int castRefType = RefTrait<T>::value;
        constexpr bool castIsConstant = IsConst<T>::value;

        if constexpr (castRefType == 0)
        {
            if (refType == 1)
            {
                if (isConst)
                    return *std::any_cast<const RawT *>(storage);
                else
                    return *std::any_cast<RawT *>(storage);
            }
            return std::any_cast<RawT>(storage);
        }

        if (refType == 0)
        {
            return *std::any_cast<RawT>(&storage);
        }

        if constexpr (castIsConstant)
        {
            if (isConst)
                return *std::any_cast<const RawT *>(storage);
            else
                return *std::any_cast<RawT *>(storage);
        }
        else
        {
            if (isConst)
            {
                throw std::runtime_error("Cannot cast const ref to non-const ref");
            }

            return *std::any_cast<RawT *>(storage);
        }
    }

    template <typename... Args, size_t N, size_t... Is>
    std::tuple<Args...> AsTuple(std::array<ArgWrapper, N> &array, std::index_sequence<Is...>)
    {
        return std::forward_as_tuple(array[Is].Cast<Args>()...);
    }

    template <typename... Args, size_t N, typename = std::enable_if_t<N == sizeof...(Args)>>
    std::tuple<Args...> AsTuple(std::array<ArgWrapper, N> &array)
    {
        return AsTuple<Args...>(array, std::make_index_sequence<N>());
    }

private:
    int refType{0};
    bool isConst{false};

    std::any storage{};
};