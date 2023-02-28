#ifndef WALLS_WALL_H
#define WALLS_WALL_H

namespace walls{

    class Wall{
        
        private:
            int nDecorNo;
        
        public:
            Wall();
            Wall(int nDecorNo);
        
        public:
            int getDecorNo();
    
    };


}



#endif