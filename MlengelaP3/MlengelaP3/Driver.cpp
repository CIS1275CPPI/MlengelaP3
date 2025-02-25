/********************************************************************************
 * Program: Planets
 * Programmer: Daudi Mlengela (dmlengela@cnm.edu)
 * Date: 13 October 2021 @ 11:59:59.
 * Purpose: To calculate the weight and distance as we travel on various planets: 
 ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int main()

{
    /********************************************************************
    * First we need to declare variables and vector.
    *********************************************************************/
    const vector<string> planets{ "Mercury", "Venus","Earth",
        "Mars","Jupiter", "Saturn","Uranus", "Neptune"
    };
    const vector<int> distances =
    { 36, 67,93,141,483,886,1782, 2793
    };
    const vector<double> gravities =
    { 0.27, 0.86,1.0,0.37,2.64,1.17,0.92,1.44
    };
    /**************************************************************************
    * Second, Display the number of years, days and hours required for the trip.
    ***************************************************************************/

    const int Hours_Per_Day = 24;
    const int Days_Per_Year = 365;
    const int Hours_Per_Year = (Hours_Per_Day * Days_Per_Year);

    bool done = false;

    do
    {
        /***********************************************************
        * One: we need to declare the name of the user: Gwendolyn.
        ************************************************************/
        string name;
        cout << "\n Please enter your first name : " << endl;
        getline(cin, name);
        /***********************************************************
        * Two: we need also to declare weight in pounds: 115.
        ************************************************************/
        int pounds = 0;
        cout << " Please " << name << " enter your weight in pounds: ";
        cin >> pounds;
        /**********************************************************
        * Three: we need to ask the user which speed they want to travel with.
        * The speed is 600 mph.
        ***********************************************************/

        int mph = 0;
        cout << name << ", how fast would you like to travel (in miles per hour)? ";
        cin >> mph;

        /**************************************************************
         * Four, we need to declara variables for calculations.
         *****************************************************************/
        for (unsigned i = 0; i < planets.size(); i++)
        {
            cout << (i + 1) << ". " << planets[i] << "\n";
        }

        int choice = 0;
        {
            cout << "Enter your choice: ";
        }
        cin >> choice; 


        /************************************************************************
        * Fifth, Display the traveler’s name, weight on Earth,
        * the destination planet and weight on that planet.
        * Also report travel time results:  Break down the travel time into years,
        * days and hours.
        *************************************************************************/

        cout << name << ", your weight on: " << planets[choice] << " would be: " <<
            ios::fixed << setprecision(2) << pounds * gravities[choice] <<
            " pounds\n";

        int hours = (1000000 * distances[choice]) / mph;

        int years = hours % Days_Per_Year;

        hours = years % Hours_Per_Year;

        int days = hours / Hours_Per_Day;

        hours = days % Hours_Per_Day;

        cout << "Your trip to: " << planets[choice] << " would take " <<
            years << " year(s), " << days << " day(s) and " << hours << " hour(s)\n";

        cout << "\n";

        /*******************************************************************
        * Lastly, we need to ask doAnother.
        *******************************************************************/
        
         string response;
         cout << "Would you like to calculate a space trip to another planet? ";
         cin >> response;
         if (response == "" || response[0] == 'n' || response[0] == 'N')
             done = true; 
         cout << "Good-bye! Vectors are fun! " << endl << endl;

    } while (!done);

}