cmake_minimum_required(VERSION 3.9)
project(textventure)

set(CMAKE_CXX_STANDARD 11)

add_executable(textventure

        TextVenture.h TextVenture.cpp

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

        data/entity/Player.h data/entity/Player.cpp
        data/entity/Stats.h data/entity/Stats.cpp
        data/inventory/Consumeable.h
        data/inventory/Equipment.h data/inventory/Equipment.cpp
        data/inventory/Inventory.h data/inventory/Inventory.cpp
        data/inventory/Item.h data/inventory/Item.cpp

        game/Game.h game/Game.cpp
        game/commands/AttackCommand.h game/commands/AttackCommand.cpp
        game/commands/Elements.h game/commands/Elements.cpp
        game/commands/ExitCommand.h game/commands/ExitCommand.cpp
        game/commands/HelpCommand.h game/commands/HelpCommand.cpp
        game/commands/InventoryCommand.h game/commands/InventoryCommand.cpp
        game/commands/MoveCommand.h game/commands/MoveCommand.cpp
        game/commands/SearchCommand.h game/commands/SearchCommand.cpp
        game/items/GuardsmanSet.h game/items/GuardsmanSet.cpp
        game/items/HealthPotion.h game/items/HealthPotion.cpp
        game/locations/Kalorinian.h game/locations/Kalorinian.cpp
        game/locations/Kitchen.h game/locations/Kitchen.cpp
        game/locations/Market.h game/locations/Market.cpp
        game/locations/Temple.h game/locations/Temple.cpp
        game/locations/TownSquare.h game/locations/TownSquare.cpp
        game/locations/WindmoreOutpost.h game/locations/WindmoreOutpost.cpp
        game/moves/FuriousStrike.h game/moves/FuriousStrike.cpp
        game/moves/LungeAttack.h game/moves/LungeAttack.cpp
        game/moves/MagicLightAttack.h game/moves/MagicLightAttack.cpp
        game/moves/MeleeLightAttack.h game/moves/MeleeLightAttack.cpp
        game/moves/RangedLightAttack.h game/moves/RangedLightAttack.cpp
        game/quests/IntoTheWild.h game/quests/IntoTheWild.cpp

        quest/Quest.h quest/Quest.cpp
        quest/QuestManager.h quest/QuestManager.cpp
        quest/objective/CollectObjective.h quest/objective/CollectObjective.cpp
        quest/objective/CompleteObjective.h quest/objective/CompleteObjective.cpp
        quest/objective/DefeatObjective.h quest/objective/DefeatObejctive.cpp
        quest/objective/InteractObjective.h quest/objective/InteractObjective.cpp
        quest/objective/MultiObjective.h quest/objective/MultiObjective.cpp
        quest/objective/Objective.h quest/objective/Objective.cpp

        test/Test.h test/Test.cpp

        world/Area.h world/Area.cpp
        world/Compass.h world/Compass.cpp
        world/Location.h world/Location.cpp
        world/World.h world/World.cpp
)