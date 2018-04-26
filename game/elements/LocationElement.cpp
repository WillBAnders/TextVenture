#include "LocationElement.h"

#include "../../world/Location.h"
#include "../Game.h"
#include "../../Util.h"
#include "../locations/Locations.h"

void LocationElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string name = args.next();
    while (args.hasNext()) {
        name += " " + args.next();
    }
    Location *location = Game::get().getWorld().getLocation(name);
    if (location == nullptr) {
        throw ParseException("There is no location named " + name + ".");
    }
    ctx.putArg(getName(), location);
}