# Planets:
<img width="964" height="370" alt="image" src="https://github.com/user-attachments/assets/f8818e01-4d93-43cc-915d-8629b3b80303" />

This program goes where no program has gone before, exploring new frontiers in C++.  The program performs calculations concerning weight on various planets as well as travel time between planets.
In main, use vectors to hold planet names, distance from the sun, and the relative gravity on each planet.
These are parallel vectors, so that the information at a position in each vector refers to information concerning the same planet.
That means that the planet at index 3 has the distance at index 3 and the relative gravity at index 3.

## Begin by writing pseudocode for Program 3.  
Then write hand calculations for this test case:

Name: Gwendolyn,

Weight: 115 #, 

Travel Speed: 600 mph, 

Planet to visit: Saturn.


## Now, open a new Visual Studio Project, named lastnameP3.

Use your pseudocode to outline your logic, then fill in the outline with your code.
Your program should first declare/initialize variables, including your vectors.

Display your course header with the program title and a brief introduction using a cout.
Start a do-while loop as your Play loop.

## Ask for the user’s name, Earth weight, the speed they want to travel, and the planet they wish to visit.
Be sure to include the units for the data you request. You will need to provide a menu with the planet names and a way for the user to select the chosen destination.
Your interaction with the user should look similar to this:

<img width="975" height="481" alt="image" src="https://github.com/user-attachments/assets/d6a5f73c-c747-49e9-9e96-1ccb31a884f2" />

Using the data you have obtained from the user, determine the user’s weight on the destination planet and the travel time in hours.

# Sources:

General sources:

[Vector](https://cplusplus.com/reference/vector/vector/) and [this](https://cplusplus.com/reference/vector/vector/)

[Look at this example](https://www.codecademy.com/resources/docs/cpp/vectors)

[Precision](https://cplusplus.com/reference/iomanip/setprecision/)

Specific sources:

These equations might be useful:

_Weight on New Planet = Weight on Earth * Relative Surface Gravity of New Planet
Travel Time (hours) = Travel Distance (miles) / Speed of Travel(mph)_

Use the data in this table to load the vectors:

| Planet    | Distance from the Sun(millions of miles)   | Surface Gravity as a Percent of Earth's Gravity  |
|-----------|--------------------------------------------| -------------------------------------------------|
| Mercury   | 36                                         | 0.27                                             |
| Venus     | 67                                         | 0.86                                             |
| Earth     | 93                                         | 1.00                                             |
| Mars      | 141                                        | 0.37                                             |
| Jupiter   | 483                                        | 2.64                                             |
| Saturn    | 886                                        | 1.17                                             |
| Uranus    | 1782                                       | 0.92                                             |
| Nepture   | 2793                                       | 1.44                                             |

Display the traveler’s name, weight on Earth, the destination planet, and weight on that planet.   Also report travel time results:
Break down the travel time into years, days, and hours.  You may use 24 hours in a day and 365 days in a year (ignore leap years).
Display the number of years, days, and hours required for the trip.

The program should have only one set of variables to be used in the calculations.
The code for the calculations and resultant output should be written in only one place in your program.  
Do not duplicate code and calculations for each planet. Make your program as efficient as possible without losing clarity.

Ask the user if they would like to calculate a space trip to another planet.  Remember to tell the user the choices for an answer. 
If they say yes, loop up to the top of the Play Loop.  When the user is done, present a goodbye message.

Set the precision, etc, so you are reporting floating point numbers with 2 decimal places.  Make sure you include the units of any data you are displaying.





# Usage:



# Contributions: 
I welcome contributions to the program! Who knows? It might not run on the user's end. If you have any suggestions, bug reports, or any kind of feature requests, please contact me or submit a pull request.
