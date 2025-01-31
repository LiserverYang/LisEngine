/*
 * Copyright 2025, LiserverYang, All rights reserved.
 *
 * Genericed by reflection system in LisEngine.
 */

#include "Foo.gen.h"

ReflectionSystem::__FooHelper::__FooHelper()
{
    ReflectionSystem::AddClass<Foo>("Foo")
    .AddMemberVariable("field", &Foo::field)
    .AddMemberFunction("Func", &Foo::Func);
}