#define SIZE 100

class Map {
    
    public:
        //std::string object[SIZE][SIZE];
        int coordinates[SIZE][SIZE][3];

        Map();
        ~Map();
//        void genMap(int[][][] coordinates, std::String[][] object);
        void printMap();
};

Map::Map() {
    

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int obj = rand() % 20; // rand num 0-19
            coordinates[i][j][0] = i; // x
            coordinates[i][j][1] = j; // y

            // object
            if (obj <= 14) {
                //object[i][j] = "G";
                coordinates[i][j][2] = 0;
            }
            else if (obj <= 17) {
                //object[i][j] = "T";
                coordinates[i][j][2] = 1;
            }
            else if (obj == 18) {
                //object[i][j] = "E";
                coordinates[i][j][2] = 2;
            }
            else {
                //object[i][j] = "I";
                coordinates[i][j][2] = 3;
            }


        }
    }
}

Map::~Map() {
    std::cout << "Map deleted" << std::endl;
}

void Map::printMap() {

    int obj = 0;
    std::string object = "";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            obj = coordinates[i][j][2];
            
            if (obj == 0) {
                object = "G"; // grass
            }
            else if (obj == 1) {
                object = "T"; // tree
            }
            else if (obj == 2) {
                object = "E"; // enemy
            }
            else {
                object = "I"; // item
            }
            std::cout << object;
            
            // square
            if (j == SIZE - 1) {
                std::cout << std::endl;
            }
        }
    }
}
