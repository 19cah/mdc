# Assignment 5

The purpose of this exercise is to give you some experience at working with making decision in c++
The college student classification is determined according to the following schedule:

```
< 32 credits         Freshman
>= 32 but < 64       Sophomore
>=64 but  < 95       Junior
>=96                 Senior
```

The program needs to prompt the user for the number of credits they have completed and calculate their classification. The program needs to display the number of credits completed and the classification. Following is a sample output of the program run:
"24 completed credits makes you a Freshman”
Use good programing practices such as safe programing practices.

### Instructions

Declare a variable called `numCredits` to hold number of credits. Be sure to select appropriate data type for variables
Declare a variable called `studentClassification` that will hold student classification such as `Freshman`, `Sophomore`, `Junior`, `Senior`. Be sure to select the correct data types for this variable.
Do not accept negative values, letters, or characters such as !, ?.##, $, etc. Test your code for the following input:

A negative value: enter `-q` for number of credits

A letter: enter “a” for number of credits

Other characters: enter `!` for number of credits
Note: do not enter `""` - this is just to emphasize what your input should be. Thus enter a `-1`, `a`, `!`, etc. When your test your code.

##### In these cases, your program should display:

`Wrong input, please run the program again.` Be sure to spell the output exactly as presented above.

##### Test your program with the following input:

```
Freshman: 24
Sophomore: 55
Junior: 64
Senior: 98
```

Assign appropriate value to `studentClassification` variable when you use conditional statements to test student credit range
The program needs to display the contents of the `studentClassification` variable in the following manner:
In case the input value was `24`

`24` completed credits makes you a `Freshman` similarly, for `Sophomore`, `Junior` and `Senior` values.

See code on Github [here](https://github.com/19cah/mdc/blob/master/cpp/assignments/Assignment%2005/assignment5.cpp)

---

<p align="center">
  copyrigth (c) <a href="https://github.com/19cah">
        <img src="https://img.shields.io/badge/Abraham-%4019cah-orange.svg"
            alt="Carlos Abraham"></a>
</p>
