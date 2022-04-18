class Box {
    private:
       int length;
       int width;
       int height;
    public:
//setters
void setLength(double l);
void setWidth(double w);
void setHeight(double h);

//getters
int getLength();
int getWidth();
int getHeight();      
 
int calcVolume();
};
