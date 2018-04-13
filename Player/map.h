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

    public:
        virtual std::string getName() {
            return name;
        }
        virtual Area* getArea() {
            return area;
        }
        virtual std::string getMessage() {
            return message;
        }
        //std::vector<std::string> neighbors;
};

class Square: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        //std::vector<std::string> neighbors;
    public:
        Square(Area *area);
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
    
    public:
        Market(Area *area);
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

class Wilderness: public Location {
    
    private:
        std::string name;
        std::string message;
        Area *area;
        
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
