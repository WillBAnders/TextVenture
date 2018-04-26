cmake_minimum_required(VERSION 3.9)
project(textventure)

set(CMAKE_CXX_STANDARD 11)

add_executable(textventure

        TextVenture.h TextVenture.cpp
        Util.h Util.cpp

        combat/Battle.h combat/Battle.cpp
        combat/Battler.h combat/Battler.cpp
        combat/Move.h combat/Move.cpp

        command/Command.h command/Command.cpp
        command/CommandContext.h command/CommandContext.cpp
        command/CommandException.h command/CommandException.cpp
        command/argument/ParseException.h command/argument/ParseException.cpp
        command/argument/ParsingContext.h command/argument/ParsingContext.cpp
        command/element/CommandElement.h
        command/element/IntElement.h command/element/IntElement.cpp
        command/element/OptionalElement.h command/element/OptionalElement.cpp
        command/element/SequentialElement.h command/element/SequentialElement.cpp
        command/element/StringElement.h command/element/StringElement.cpp
        command/registry/CommandManager.h command/registry/CommandManager.cpp
        command/registry/Mapping.h command/registry/Mapping.cpp

        data/Describable.h data/Describable.cpp
        data/Interactable.h
        data/Nameable.h data/Nameable.cpp
        data/Printable.h
        data/entity/Enemy.h
        data/entity/Entity.h data/entity/Entity.cpp
        data/entity/NPC.h
        data/entity/Player.h data/entity/Player.cpp
        data/entity/Stats.h data/entity/Stats.cpp
        data/inventory/Consumeable.h
        data/inventory/Equipment.h data/inventory/Equipment.cpp
        data/inventory/Inventory.h data/inventory/Inventory.cpp
        data/inventory/Item.h data/inventory/Item.cpp

        game/Game.h game/Game.cpp
        game/commands/AttackCommand.h game/commands/AttackCommand.cpp
        game/commands/EquipmentCommand.h game/commands/EquipmentCommand.cpp
        game/commands/ExitCommand.h game/commands/ExitCommand.cpp
        game/commands/HelpCommand.h game/commands/HelpCommand.cpp
        game/commands/InventoryCommand.h game/commands/InventoryCommand.cpp
        game/commands/ItemCommand.h game/commands/ItemCommand.cpp
        game/commands/LocationCommand.h game/commands/LocationCommand.cpp
        game/commands/MoveCommand.h game/commands/MoveCommand.cpp
        game/commands/QuestCommand.h game/commands/QuestCommand.cpp
        game/elements/DirectionElement.h game/elements/DirectionElement.cpp
        game/elements/Elements.h game/elements/Elements.cpp
        game/elements/LocationElement.h game/elements/LocationElement.cpp
        game/elements/MoveElement.h game/elements/MoveElement.cpp
        game/elements/QuestElement.h game/elements/QuestElement.cpp
        game/entities/WildBoar.h game/entities/WildBoar.cpp
        game/entities/VillageGuard.h game/entities/VillageGuard.cpp
        game/items/EnergyPotion.h game/items/EnergyPotion.cpp
        game/items/HealthPotion.h game/items/HealthPotion.cpp
        game/items/Items.h game/items/Items.cpp
        game/locations/Clearing.h game/locations/Clearing.cpp
        game/locations/Drawbridge.h game/locations/Drawbridge.cpp
        game/locations/FrontGrounds.h game/locations/FrontGrounds.cpp
        game/locations/Garden.h game/locations/Garden.cpp
        game/locations/GreatHall.h game/locations/GreatHall.cpp
        game/locations/Locations.h game/locations/Locations.cpp
        game/locations/MainKitchen.h game/locations/MainKitchen.cpp
        game/locations/Market.h game/locations/Market.cpp
        game/locations/OHartilyTavern.h game/locations/OHartilyTavern.cpp
        game/locations/TradersPass.h game/locations/TradersPass.cpp
        game/locations/TyrasSquare.h game/locations/TyrasSquare.cpp
        game/locations/WindmoreOutpost.h game/locations/WindmoreOutpost.cpp
        game/moves/FuriousStrike.h game/moves/FuriousStrike.cpp
        game/moves/LightAttack.h game/moves/LightAttack.cpp
        game/moves/LungeAttack.h game/moves/LungeAttack.cpp
        game/quests/IntoTheWild.h game/quests/IntoTheWild.cpp
        game/quests/Quests.h game/quests/Quests.cpp
        game/quests/objectives/Objectives.h game/quests/objectives/Objectives.cpp

        quest/Quest.h quest/Quest.cpp
        quest/QuestManager.h quest/QuestManager.cpp
        quest/objective/CollectObjective.h quest/objective/CollectObjective.cpp
        quest/objective/QuestObjective.h quest/objective/QuestObjective.cpp
        quest/objective/DefeatObjective.h quest/objective/DefeatObejctive.cpp
        quest/objective/InteractObjective.h quest/objective/InteractObjective.cpp
        quest/objective/LocationObjective.h quest/objective/LocationObjective.cpp
        quest/objective/MultiObjective.h quest/objective/MultiObjective.cpp
        quest/objective/Objective.h quest/objective/Objective.cpp

        test/Test.h test/Test.cpp

        world/Area.h world/Area.cpp
        world/Compass.h world/Compass.cpp
        world/Location.h world/Location.cpp
        world/World.h world/World.cpp
)