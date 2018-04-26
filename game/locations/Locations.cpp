#include "Locations.h"

Clearing *Locations::clearing() {
    static auto *clearing = new Clearing();
    return clearing;
}

Drawbridge *Locations::drawbridge() {
    static auto *drawbridge = new Drawbridge();
    return drawbridge;
}

FrontGrounds *Locations::frontGrounds() {
    static auto *frontGrounds = new FrontGrounds();
    return frontGrounds;
}

Garden *Locations::garden() {
    static auto *garden = new Garden();
    return garden;
}

GreatHall *Locations::greatHall() {
    static auto *greatHall = new GreatHall();
    return greatHall;
}

MainKitchen *Locations::mainKitchen() {
    static auto *mainKitchen = new MainKitchen();
    return mainKitchen;
}

Market *Locations::market() {
    static auto *market = new Market();
    return market;
}

OHartilyTavern *Locations::oHartilyTavern() {
    static auto *oHartilyTavern = new OHartilyTavern();
    return oHartilyTavern;
}

TradersPass *Locations::tradersPass() {
    static auto *tradersPass = new TradersPass();
    return tradersPass;
}

TyrasSquare *Locations::tyrasSquare() {
    static auto *tyrasSquare = new TyrasSquare();
    return tyrasSquare;
}

WindmoreOutpost *Locations::windmoreOutpost() {
    static auto *windmoreOutpost = new WindmoreOutpost();
    return windmoreOutpost;
}