enum Cardinal {NORTH, EAST, SOUTH, WEST};
class Area {
    
    private:
        std::string name;

    public:
        Area(std::string name);
        std::string getName() {
            return name;
        }
};

Area::Area(std::string name) {
    this->name = name;
}

class Location {

    private:
        std::string name;
        std::string message;
        Area *area;
        std::map <Cardinal, Location*> neighbors;

    public:
        virtual void declareNeighbors(Location *north, Location *east, Location *south, Location *west) {
            neighbors[NORTH] = north;
            neighbors[EAST] = east;
            neighbors[SOUTH] = south;
            neighbors[WEST] = west;
        }
        virtual std::string getName() {
            return name;
        }
        virtual Area* getArea() {
            return area;
        }
        virtual std::string getMessage() {
            return message;
        }
        virtual std::map<Cardinal, Location*> getNeighbors() {
            return neighbors;
        }
        //std::vector<std::string> neighbors;
};

class Square: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        std::map <Cardinal, Location*> neighbors;
        //std::vector<std::string> neighbors;
    public:
        Square(Area *area);
        void declareNeighbors(Location *north, Location *east, Location *south, Location *west) {
            neighbors[NORTH] = north;
            neighbors[EAST] = east;
            neighbors[SOUTH] = south;
            neighbors[WEST] = west;
        }
        std::string getName() {
            return name;
        }
        Area* getArea() {
            return area;
        }
        std::string getMessage() {
            return message;
        }
        std::map<Cardinal, Location*> getNeighbors() {
            return neighbors;
        }
};

Square::Square(Area *area) {
    
    this->name = "Square";
    this->message = "You are at the Town Square.";
    this->area = area;
    //this->neighbors = {"Market"};
}

class Market: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        std::map <Cardinal, Location*> neighbors;
    public:
        Market(Area *area);
        void declareNeighbors(Location *north, Location *east, Location *south, Location *west) {
            neighbors[NORTH] = north;
            neighbors[EAST] = east;
            neighbors[SOUTH] = south;
            neighbors[WEST] = west;
        }        
        std::string getName() {
            return name;
        }
        Area* getArea() {
            return area;
        }
        std::string getMessage() {
            return message;
        }
};

Market::Market(Area *area) {
    
    this->name = "Market";
    this->message = "You are at the Market";
    this->area = area;
}

class Tavern: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        std::map <Cardinal, Location*> neighbors;
    public:
        Tavern(Area *area);
        void declareNeighbors(Location *north, Location *east, Location *south, Location *west) {
            neighbors[NORTH] = north;
            neighbors[EAST] = east;
            neighbors[SOUTH] = south;
            neighbors[WEST] = west;
        }
        std::string getName() {
            return name;
        }
        Area* getArea() {
            return area;
        }
        std::string getMessage() {
            return message;
        }

};

Tavern::Tavern(Area *area) {
    this->name = "Tavern";
    this->message = "You are in the Tavern";
    this->area = area;
}

class Wilderness: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        std::map <Cardinal, Location*> neighbors;
    public:
        Wilderness(Area *area);
        std::string getName() {
            return name;
        }
        Area* getArea() {
            return area;
        }
        std::string getMessage() {
            return message;
        }
};

Wilderness::Wilderness(Area *area) {
    this->name = "Wilderness";
    this->message = "You are in the Wilderness";
    this->area = area;
}

class ThroneRoom: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        std::map <Cardinal, Location*> neighbors;
    public:
        ThroneRoom(Area *area);
        void declareNeighbors(Location *north, Location *east, Location *south, Location *west) {
            neighbors[NORTH] = north;
            neighbors[EAST] = east;
            neighbors[SOUTH] = south;
            neighbors[WEST] = west;
        }
        std::string getName() {
            return name;
        }
        Area* getArea() {
            return area;
        }
        std::string getMessage() {
            return message;
        }

};

ThroneRoom::ThroneRoom(Area *area) {
    this->name = "Throne Room";
    this->message = "You are in the Throne Room";
    this->area = area;
}

class MainRoom: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        std::map <Cardinal, Location*> neighbors;
    public:
        MainRoom(Area *area);
        void declareNeighbors(Location *north, Location *east, Location *south, Location *west) {
            neighbors[NORTH] = north;
            neighbors[EAST] = east;
            neighbors[SOUTH] = south;
            neighbors[WEST] = west;
        }        std::string getName() {
            return name;
        }
        Area* getArea() {
            return area;
        }
        std::string getMessage() {
            return message;
        }

};

MainRoom::MainRoom(Area *area) {
    this->name = "Main Room";
    this->message = "You are in the Main Room";
    this->area = area;
}


