#include <iostream>
#include <string>
using namespace std;

int main ()
{
    //DECLARE VERİABLES

    // int -> stores intiger whole number without float such as 123 , -123
    // float -> stores floating point number such as 3.14 , -2.76
    // char -> stores SİNGLE letter such as 'a' this value sourraunded by single quotes like this ''
    // string -> stores text such as "hello c+ this value declaring by double quotes
    //bool -> stores value witch True or False

    //syntax variables
    // type veriable name = value;
    int number = 12;
    int num;
    int n , x;
    double myFloat = 12;
    string myText = "hello c";
    char mySingleLeter = 'a';
    // constant keyword if ı use constant keyword the veriables be unchangeble
    const int notChangeable = 12;
    // get user input
    string my_text;
    cin << my_text;

    // ----------------------------------------------------------------------------------------------------------------------------------


    // MATH OPERATIONS
    //operator / -> division , * -> multiplication , - -> subtraction , + -> addition
    // % -> moduls , ++ incremet
    // == equal to , != not equal
    // && and , || or

    //----------------------------------------------------------------------------------------------------------------------------
    // STRİNGS

    //Concatenation
    string firstName = "Elon";
    string lastName = "musk";
    string fullName = firstName + lastName;
    // apend
    string fullname = firstName.append(lastName);

    // strings length
    string str3 = "asdlkdfhşalkdhıekc";
    cout << "this strings length is "<< str3.length()

    // acces string
    string firstName1 = "Elon";
    cout << firstName1[0];
    firstName1[2] = 's' ;// 3. index has been changed

    // /n new line , /t make tab

    // ----------------------------------------------------------------------------------------------------------------------------------------
    //MATH
    /*abs(x)	Returns the absolute value of x
    acos(x)	Returns the arccosine of x
    asin(x)	Returns the arcsine of x
    atan(x)	Returns the arctangent of x
    cbrt(x)	Returns the cube root of x
    ceil(x)	Returns the value of x rounded up to its nearest integer
    cos(x)	Returns the cosine of x
    cosh(x)	Returns the hyperbolic cosine of x
    exp(x)	Returns the value of Ex
    expm1(x)	Returns ex -1
    fabs(x)	Returns the absolute value of a floating x
    fdim(x, y)	Returns the positive difference between x and y
    floor(x)	Returns the value of x rounded down to its nearest integer
    hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
    fma(x, y, z)	Returns x*y+z without losing precision
    fmax(x, y)	Returns the highest value of a floating x and y
    fmin(x, y)	Returns the lowest value of a floating x and y
    fmod(x, y)	Returns the floating point remainder of x/y
    pow(x, y)	Returns the value of x to the power of y
    sin(x)	Returns the sine of x (x is in radians)
    sinh(x)	Returns the hyperbolic sine of a double value
    tan(x)	Returns the tangent of an angle
    tanh(x)	Returns the hyperbolic tangent of a double value*/

    // ------------------------------------------------------------------------------------------------------------------

    //BOOLEANS
    bool myBoolean = true;
    cout << (12 < 20) // outputs consists true


















}