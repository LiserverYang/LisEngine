/** 
 * Copyright 2025, LiserverYang. All rights reserved.
 * 
 * Example
 */

#ifdef __REFLECTION_META_PARSER__

#define CLASS(ClassName)  class __attribute__((annotate("reflect-class"))) ClassName
#define PROPERTY() __attribute__((annotate("reflect-property")))
#define FUNCTION() __attribute__((annotate("reflect-function")))

#else

#define CLASS(ClassName, ...) class ClassName
#define PROPERTY(...)
#define FUNCTION(...)

#endif

CLASS(Foo)
{
public:
    FUNCTION()
    void Func()
    {
        int a = 1;
    }

    PROPERTY()
    int field = 0;
};