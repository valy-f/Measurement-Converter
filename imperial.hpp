#pragma once
// ------------- TO IMPERIAL -----------------
class ToImperial {
public:

    void ImperialUnits() // miara
    {
        std::cout << " \nChoose the measurement you need to convert to Imperial:\n\n";
        std::cout << " 1 -- LENGTH\n\n";
        std::cout << " 2 -- MASS\n\n";
        std::cout << " 3 -- CAPACITY\n\n";
        std::cout << " 4 -- Exit <<\n\n";
        int unitI;
        std::cin >> unitI;
        if (unitI == 1)
        {
            ImperialLength();
        }
        else if (unitI == 2)
        {
            ImperialMass();
        }
        else if (unitI == 3)
        {
            ImperialCapacity();
        }
        else if (unitI == 4)
        {
            return;
        }
        else
        {
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            ImperialUnits();
        }
    }

    void ImperialLength() // dlugosc
    {
        const double cmI = 0.3937007874; // iches in 1 cm
        const double cmF = 0.032808399; // feet in 1 cm
        const double cmY = 0.010936133; // yards in 1 cm
        const double cmM = 0.0000062137; // miles in 1 cm

        const double mI = 39.37007874; // iches in 1 m
        const double mF = 3.280839895; // feet in 1 m
        const double mY = 1.0936132983; // yards in 1 m
        const double mM = 0.0006213689; // miles in 1 m

        const double kmI = 39370.07874; // iches in 1 km
        const double kmF = 3280.839895; // feet in 1 km
        const double kmY = 1093.6132983; // yards in 1 km
        const double kmM = 0.6213688756; // miles in 1 km

        std::cout << " \n Choose the unit of the LENGTH you want to enter to convert into Imperial system:\n\n";
        std::cout << " 1 -- CANTIMETERS\n\n";
        std::cout << " 2 -- METERS\n\n";
        std::cout << " 3 -- KILOMETERS\n\n";
        std::cout << " 4 -- One step back <\n\n";
        std::cout << " 5 -- Exit <<\n\n";
        int uIL;
        std::cin >> uIL;
        switch (uIL)
        {
        case 1:

            std::cout << " Enter how many CANTIMETERS you want to convert into Imperial values:\n\n";
            double cm;
            std::cin >> cm;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << cm << " cm = " << cm * cmI << " inches\n\n";
            std::cout << " " << cm << " cm = " << cm * cmF << " feet\n\n";
            std::cout << " " << cm << " cm = " << cm * cmY << " yards\n\n";
            std::cout << " " << cm << " cm = " << cm * cmM << " miles\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int e;
            std::cin >> e;
            switch (e)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 2:
            std::cout << " Enter how many METERS you want to convert into Imperial values:\n\n";
            double m;
            std::cin >> m;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << m << " m = " << m * mI << " inches\n\n";
            std::cout << " " << m << " m = " << m * mF << " feet\n\n";
            std::cout << " " << m << " m = " << m * mY << " yards\n\n";
            std::cout << " " << m << " m = " << m * mM << " miles\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int r;
            std::cin >> r;
            switch (r)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 3:
            std::cout << " Enter how many KILOMETERS you want to convert into Imperial values:\n\n";
            double km;
            std::cin >> km;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << km << " km = " << km * kmI << " inches\n\n";
            std::cout << " " << km << " km = " << km * kmF << " feet\n\n";
            std::cout << " " << km << " km = " << km * kmY << " yards\n\n";
            std::cout << " " << km << " km = " << km * kmM << " miles\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int z;
            std::cin >> z;
            switch (z)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 4:
            ImperialUnits();
        case 5:
            return;  break;
        default:
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            ImperialLength();
        }
    }

    void ImperialMass() // masa
    {
        const double gOZ = 0.0352739907; // ounces in 1 g
        const double gLB = 0.0022046244; // pounds in 1 g
        const double gST = 0.0001574732; // stones in 1 g

        const double kgOZ = 35.273990723; // ounces in 1 kg
        const double kgLB = 2.2046244202; // pounds in 1 kg
        const double kgST = 0.1574732142; // stones in 1 kg

        const double tnOZ = 35273.990723; // ounces in 1 tn
        const double tnLB = 2204.6244202; // punds in 1 tn
        const double tnST = 157.473; // stones in 1 tn

        std::cout << " \n Choose the unit of the MASS you want to enter to convert into Imperial system:\n\n";
        std::cout << " 1 -- GRAMS\n\n";
        std::cout << " 2 -- KILOGRAMS\n\n";
        std::cout << " 3 -- TONNES\n\n";
        std::cout << " 4 -- One step back <\n\n";
        std::cout << " 5 -- Exit <<\n\n";
       int uIM;
        std::cin >> uIM;
        switch (uIM)
        {
        case 1:
            std::cout << " Enter how many GRAMS you want to convert into Imperial values:\n\n";
            double g;
            std::cin >> g;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << g << " g = " << g * gOZ << " ounces\n\n";
            std::cout << " " << g << " g = " << g * gLB << " pounds\n\n";
            std::cout << " " << g << " g = " << g * gST << " stones\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int e;
            std::cin >> e;
            switch (e)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 2:
            std::cout << " Enter how many KILOGRAMS you want to convert into Imperial values:\n\n";
            double kg;
            std::cin >> kg;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << kg << " kg = " << kg * kgOZ << " ounces\n\n";
            std::cout << " " << kg << " kg = " << kg * kgLB << " pounds\n\n";
            std::cout << " " << kg << " kg = " << kg * kgST << " stones\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int x;
            std::cin >> x;
            switch (x)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 3:
            std::cout << " Enter how many TONNES you want to convert into Imperial values:\n\n";
            double t;
            std::cin >> t;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << t << " tn = " << t * tnOZ << " ounces\n\n";
            std::cout << " " << t << " tn = " << t * tnLB << " pounds\n\n";
            std::cout << " " << t << " tn = " << t * tnST << " stones\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int b;
            std::cin >> b;
            switch (b)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 4:
            ImperialUnits();
            break;
        case 5:
            return; break;
            break;
        default:
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            ImperialMass();
        }
    }

    void ImperialCapacity() // pojemnosc
    {
        const double mlFP = 0.0351950797; // fluid ouces in 1 mml
        const double mlP = 0.001759754; // pints in 1 mml
        const double mlG = 0.0002199692; // gallons in 1 mml

        const double lFP = 35.195079728; // fluid ouces in 1 mml
        const double lP = 1.7597539864; // pints in 1 mml
        const double lG = 0.2199692483; // gallons in 1 mml

        std::cout << " \n Choose the unit of the CAPACITY you want to enter to convert into Imperial system:\n\n";
        std::cout << " 1 -- MILILITRES\n\n";
        std::cout << " 2 -- LITRES\n\n";
        std::cout << " 3 -- One step back <\n\n";
        std::cout << " 4 -- Exit <<\n\n";
        int uIC;
        std::cin >> uIC;
        switch (uIC)
        {
        case 1:
            std::cout << " Enter how many MILILITRES you want to convert into Imperial values:\n\n";
            double ml;
            std::cin >> ml;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << ml << " ml = " << ml * mlFP << " fluid ounces\n\n";
            std::cout << " " << ml << " ml = " << ml * mlP << " pints\n\n";
            std::cout << " " << ml << " ml = " << ml * mlG << " gallons\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int e;
            std::cin >> e;
            switch (e)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 2:
            std::cout << " Enter how many LITRES you want to convert into Imperial values:\n\n";
            double l;
            std::cin >> l;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << l << " l = " << l * lFP << " fluid ounces\n\n";
            std::cout << " " << l << " l = " << l * lP << " pints\n\n";
            std::cout << " " << l << " l = " << l * lG << " gallons\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int v;
            std::cin >> v;
            switch (v)
            {
            case 1:
                ImperialUnits();
                break;
            default:
                return; break;
            }
            break;
        case 3:
            ImperialUnits();
            break;
        case 4:
            return; break;
        default:
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            ImperialCapacity();
        }
    }
};