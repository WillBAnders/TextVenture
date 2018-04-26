#pragma once

#include "../../world/Location.h"
#include "Clearing.h"
#include "Drawbridge.h"
#include "FrontGrounds.h"
#include "Garden.h"
#include "GreatHall.h"
#include "MainKitchen.h"
#include "Market.h"
#include "OHartilyTavern.h"
#include "TradersPass.h"
#include "TyrasSquare.h"
#include "WindmoreOutpost.h"
#include "NorthGuardhouse.h"

class Locations {

    public:

        static Clearing *clearing();
        static Drawbridge *drawbridge();
        static FrontGrounds *frontGrounds();
        static Garden *garden();
        static GreatHall *greatHall();
        static MainKitchen *mainKitchen();
        static Market *market();
        static NorthGuardhouse *northGuardhouse();
        static OHartilyTavern *oHartilyTavern();
        static TradersPass *tradersPass();
        static TyrasSquare *tyrasSquare();
        static WindmoreOutpost *windmoreOutpost();

};