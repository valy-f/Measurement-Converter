#include <iostream>
#include "imperial.hpp"
#include "metric.hpp"



// ------------- MENU -----------------
class StartMenu {
public:
    void Menu()
    {
        ToImperial I;
        ToMetric M;
        std::cout << "\n Welcome! This is a metric <=> imperial system converter!\n";
        std::cout << " What do you need to convert? Choose and press ENTER\n\n";
        std::cout << " 1 - Metric to imperial\n\n 2 - Imperial to metric\n\n";

        std::cout << " 3 - Exit <<" << "\n";
        int start;
        std::cin >> start;
        if (start == 1)
        {
            I.ImperialUnits();
        }
        else if (start == 2)
        {
            M.MetricUnits();
        }
        else if (start == 3)
        {
            return; 
        }
        else
        {
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            Menu();
        }
        
        
    }
};

int main()
{
    StartMenu m;
    m.Menu();
}


