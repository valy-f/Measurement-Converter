#pragma once
// ------------- TO METRIC   -----------------
class ToMetric {
public:

    void MetricUnits() // miara
    {
        std::cout << " \nChoose the measurement you need to convert to Metric:\n\n";
        std::cout << " 1 -- LENGTH\n\n";
        std::cout << " 2 -- MASS\n\n";
        std::cout << " 3 -- CAPACITY\n\n";
        std::cout << " 4 -- Exit <<\n\n";
        int unitM;
        std::cin >> unitM;
        if (unitM == 1)
        {
            MetricLength();
        }
        else if (unitM == 2)
        {
            MetricMass();
        }
        else if (unitM == 3)
        {
            MetricCapacity();
        }
        else if (unitM == 4)
        {
            return;
        }
        else
        {
            std::cout << " Whoops! Try to type again;)\n\n";
            MetricUnits();
        }

    }

    void MetricLength() // dlugosc
    {
        const double iCM = 2.54; // cantimeters in 1 inch
        const double iM = 0.0254;  // meters in 1 inch
        const double iKM = 0.0000254;  // kilometers in 1 inch

        const double fCM = 30.48;  // cantimeters in 1 foot
        const double fM = 0.3048; // meters in 1 foot
        const double fKM = 0.0003048; // kilometers in 1 foot

        const double yCM = 91.44; // canimeters in 1 yard
        const double yM = 0.9144; // meters in 1 yard
        const double yKM = 0.0009144; // kilometers in 1 yard

        const double mCM = 160935; // canimeters in 1 mile
        const double mM = 1609.35; // meters 1 mile
        const double mKM = 1.60935; // kilometers in 1 mile

        std::cout << " \n Choose the unit of the LENGTH you want to enter to convert into Metric system:\n\n";
        std::cout << " 1 -- INCHES\n\n";
        std::cout << " 2 -- FEET\n\n";
        std::cout << " 3 -- YARDS\n\n";
        std::cout << " 4 -- MILES\n\n";
        std::cout << " 5 -- One step back <\n\n";
        std::cout << " 6 -- Exit <<\n\n";
        int uML;
        std::cin >> uML;
        switch (uML)
        {
        case 1:
            std::cout << " Enter how many INCHES you want to convert into Metric values:\n\n";
            double in;
            std::cin >> in;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << in << " in = " << in * iCM << " cacntimeters\n\n";
            std::cout << " " << in << " in = " << in * iM << " meters\n\n";
            std::cout << " " << in << " in = " << in * iKM << " kilometers\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int e;
            std::cin >> e;
            switch (e)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 2:
            std::cout << " Enter how many FEET you want to convert into Metric values:\n\n";
            double f;
            std::cin >> f;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << f << " ft = " << f * fCM << " cacntimeters\n\n";
            std::cout << " " << f << " ft = " << f * fM << " meters\n\n";
            std::cout << " " << f << " ft = " << f * fKM << " kilometers\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int n;
            std::cin >> n;
            switch (n)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 3:
            std::cout << " Enter how many YARDS you want to convert into Metric values:\n\n";
            double y;
            std::cin >> y;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << y << " yd = " << y * yCM << " cacntimeters\n\n";
            std::cout << " " << y << " yd = " << y * yM << " meters\n\n";
            std::cout << " " << y << " yd = " << y * yKM << " kilometers\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int q;
            std::cin >> q;
            switch (q)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 4:
            std::cout << " Enter how many INCHES you want to convert into Metric values:\n\n";
            double m;
            std::cin >> m;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << m << " mi = " << m * mCM << " cacntimeters\n\n";
            std::cout << " " << m << " mi = " << m * mM << " meters\n\n";
            std::cout << " " << m << " mi = " << m * mKM << " kilometers\n\n";
            std::cout << " -------------------------------------------\n\n";
            break;
        case 5:
            MetricUnits();
            break;
        case 6:
            return; break;
        default:
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            MetricLength();
        }

    }

    void MetricMass() // masa
    {
        const double ozG = 28.3495; // grams in 1 oz
        const double ozKG = 0.0283495; // kilograms in 1 oz
        const double ozTN = 2.835e-5; // tonnes in 1 oz

        const double lbG = 453.592; // grams in 1 lb
        const double lbKG = 0.453592; // kilograms in 1 lb
        const double lbTN = 0.000453; // tonnes in 1 lb

        const double stG = 6350.29; // grams in 1 stone
        const double stKG = 6.35029; // kilograms in 1 stone
        const double stTN = 0.00635029; // tonnes in 1 stone

        std::cout << " \n Choose the unit of the MASS you want to enter to convert into Metric system:\n\n";
        std::cout << " 1 -- OUNCES\n\n";
        std::cout << " 2 -- POUNDS\n\n";
        std::cout << " 3 -- STONES\n\n";
        std::cout << " 4 -- One step back <\n\n";
        std::cout << " 5 -- Exit <<\n\n";
        int uMM;
        std::cin >> uMM;
        switch (uMM)
        {
        case 1:
            std::cout << " Enter how many OUNCES you want to convert into Metric values:\n\n";
            double oz;
            std::cin >> oz;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << oz << " oz = " << oz * ozG << " grams\n\n";
            std::cout << " " << oz << " oz = " << oz * ozKG << " kilograms\n\n";
            std::cout << " " << oz << " oz = " << oz * ozTN << " tonnes\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int e;
            std::cin >> e;
            switch (e)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 2:
            std::cout << " Enter how many POUNDS you want to convert into Metric values:\n\n";
            double lb;
            std::cin >> lb;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << lb << " lbs = " << lb * lbG << " grams\n\n";
            std::cout << " " << lb << " lbs = " << lb * lbKG << " kilograms\n\n";
            std::cout << " " << lb << " lbs = " << lb * lbTN << " tonnes\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int s;
            std::cin >> s;
            switch (s)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 3:
            std::cout << " Enter how many STONES you want to convert into Metric values:\n\n";
            double st;
            std::cin >> st;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << st << " st = " << st * stG << " grams\n\n";
            std::cout << " " << st << " st = " << st * stKG << " kilograms\n\n";
            std::cout << " " << st << " st = " << st * stTN << " tonnes\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int u;
            std::cin >> u;
            switch (u)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 4:
            MetricUnits();
            break;
        case 5:
            return; break;
        default:
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            MetricMass();
        }
    }

    void MetricCapacity() // pojemnosc
    {
        const double fozML = 28.4130625; // mililitres in 1 fluid pound
        const double fozL = 0.0284130625; // litres in 1 fluid pound

        const double pML = 568.26125; // mililitres in 1 pint
        const double pL = 0.56826125; // litres in 1 pint

        const double gML = 4546.09; // mililitres in 1 gallon
        const double gL = 4.54609; // litres in 1 gallon

        std::cout << " \n Choose the unit of the MASS you want to enter to convert into Metric system:\n\n";
        std::cout << " 1 -- FLUID OUNCES\n\n";
        std::cout << " 2 -- PINTS\n\n";
        std::cout << " 3 -- GALLONS\n\n";
        std::cout << " 4 -- One step back <\n\n";
        std::cout << " 5 -- Exit <<\n\n";
        int uMC;
        std::cin >> uMC;
        switch (uMC)
        {
        case 1:
            std::cout << " Enter how many FLUID OUNCES you want to convert into Metric values:\n\n";
            double foz;
            std::cin >> foz;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << foz << " fl. oz = " << foz * fozML << " mililitres\n\n";
            std::cout << " " << foz << " fl. oz = " << foz * fozL << " litres\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int d;
            std::cin >> d;
            switch (d)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 2:
            std::cout << " Enter how many PINTS you want to convert into Metric values:\n\n";
            double pt;
            std::cin >> pt;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << pt << " pt = " << pt * pML << " mililitres\n\n";
            std::cout << " " << pt << " pt = " << pt * pL << " litres\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int j;
            std::cin >> j;
            switch (j)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 3:
            std::cout << " Enter how many GALLONS you want to convert into Metric values:\n\n";
            double gal;
            std::cin >> gal;
            std::cout << " -------------------------------------------\n\n";
            std::cout << " " << gal << " gal = " << gal * gML << " mililitres\n\n";
            std::cout << " " << gal << " gal = " << gal * gL << " litres\n\n";
            std::cout << " -------------------------------------------\n\n";
            std::cout << " Do you need to convert something more?\n";
            std::cout << " 1 - YES\n";
            std::cout << " any other key - NO (EXIT)\n";
            int k;
            std::cin >> k;
            switch (k)
            {
            case 1:
                MetricUnits();
                break;
            default:
                return; break;
            }
            break;
        case 4:
            MetricUnits();
            break;
        case 5:
            return; break;
        default:
            std::cout << " ---------------------------\n";
            std::cout << " Whoops! Try to type again;)\n";
            std::cout << " ---------------------------\n\n";
            MetricCapacity();
        }
    }
};
