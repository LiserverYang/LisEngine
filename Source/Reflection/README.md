# Reflection System

This is a reflection system for this game engine.
It is a standalone part and use the same build system as the body of game engine.

## Usage

If you are a game creater using this game engine or you just want to reading the source, this part is for you.

This part will build a executable file named `Reflection`, and the build system will call it when building this game engine.

What did it do?

It scaned all .h files in Runtime part and find all components. In the end, it will generic reflection and serialization information for build system and editor.

You can use it to get all variables and set all of them easily.