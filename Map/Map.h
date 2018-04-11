class Location {

    public:
        std::string name;
        std::string message;
        std::string area;
        //std::vector<std::string> neighbors;
};

class Square: public Location {
    
    public:
        std::string name;
        std::string message;
        std::string area;
        //std::vector<std::string> neighbors;

        Square();
};

Square::Square() {
    
    this->name = "Square";
    this->message = "You are at the Town Square.";
    this->area = "Town";
    //this->neighbors = {"Market"};
}

class Market: public Location {
    
    public:
        std::string name;
        std::string message;
        std::string area;

        Market();
};

Market::Market() {
    
    this->name = "Market";
    this->message = "You are at the Market";
    this->area = "Town";
}

class Wilderness: public Location {
    
    public:
        std::string name;
        std::string message;
        std::string area;

        Wilderness();
};

Wilderness::Wilderness() {
    this->name = "Wilderness";
    this->message = "You are in the Wilderness";
    this->area = "Wilderness";
}
