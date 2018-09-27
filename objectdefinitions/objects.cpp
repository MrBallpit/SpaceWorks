#include <iostream>
#include <climits>

using namespace std;

class Component 
{ 
    private:
        string id, type;
        enum type { generator, battery, engine, dynamo };
        int cost, energyStored, forceStored, energyGeneration, forceConversionRatio;
    
    public:


    Component(int x)
    {
        switch(x)
        {
            case 0:
            {
                break;
            }
            
            case 1: 
            {
                type = "generator";
                cost = 10;
                energyStored = 10;
                energyGeneration = 1;
                break;
            }

            case 2: 
            {
                type = "battery";
                cost = 10;
                energyStored = 100;
                break;
            }

            case 3: 
            {
                type = "engine";
                cost = 10;
                energyStored = 10;
                forceStored = 10;
                forceConversionRatio = 1;
                break;
            }

            case 4:
            {
                type = "dynamo";
                cost = 10;
                forceStored = 100;
                break;
            }

        }

    }
    void read()
    {
        cout << type;
        cout << cost;
        cout << energyStored;
        cout << energyGeneration;
        cout << forceStored;
        cout << forceConversionRatio;
    }
};

int main()
{
    enum type { generator, battery, engine, dynamo };
    Component comp(3) ;
    comp.read();
}

class Module
{
    private:
        int xDimensions;
        int yDimensions;
    Module(int xIn, int yIn)
    {
        xDimensions = xIn;
        yDimensions = yIn;


    }
}