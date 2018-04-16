cmake_minimum_required(VERSION 3.9)
project(textventure)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        textventure main.cpp

        combat/Battler.h combat/Battler.cpp
        combat/BattleManager.h combat/BattleManager.cpp
        combat/Move.h combat/Move.cpp

        command/Command.h command/Command.cpp
        command/CommandContext.h command/CommandContext.cpp
        command/CommandException.h command/CommandException.cpp
        command/registry/CommandManager.h command/registry/CommandManager.cpp
        command/registry/Mapping.h command/registry/Mapping.cpp
        command/argument/ParseException.h command/argument/ParseException.cpp
        command/argument/ParsingContext.h command/argument/ParsingContext.cpp
        command/element/CommandElement.h command/element/CommandElement.cpp
        command/element/IntElement.h command/element/IntElement.cpp
        command/element/ChoicesElement.h command/element/ChoicesElement.cpp
        command/element/SequentialElement.h command/element/SequentialElement.cpp
        command/element/StringElement.h command/element/StringElement.cpp

        test/Test.h test/Test.cpp

        world/Area.h world/Area.cpp
        world/Direction.h
        world/Location.h world/Location.cpp
        world/World.h world/World.cpp
)