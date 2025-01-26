/*
 * Copyright 2025, LiserverYang. All rights reserved.
 * 
 * This file defined reflection infomation that needed by components.
 */

#pragma once

#ifdef __REFLECTION_META_PARSER__

#define CLASS(ClassName, ...) class ClassName __attribute__((annotate("reflect-class;" #__VA_ARGS__)))
#define PROPERTY(...) __attribute__((annotate("reflect-property;" #__VA_ARGS__)))
#define FUNCTION(...) __attribute__((annotate("reflect-function;" #__VA_ARGS__)))

#else

#define CLASS(ClassName, ...) class ClassName
#define PROPERTY(...)
#define FUNCTION(...)

#endif