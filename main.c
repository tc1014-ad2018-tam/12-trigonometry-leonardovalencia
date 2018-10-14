
#define PI 3.14159265358979323846

//First we make the function that will convert the input received from degrees to radians
double Rad(double degrees) {
    double rad;
    return rad = degrees * (PI / 180); //Operation and return to convert degrees to radians
}

int main() {
    //First we will declare all the variables we are going to use
    // The first two variables correspond to the function we made before
    // The other three correspond to the csc, ctg and sec which there is no function made for them
    double degrees;
    double radians;
    double csc;
    double sec;
    double ctg;

    printf("Hello, I am going to help you calculate the trigonometric function that you desire\n Please give me a number you want in degrees\n");

    // As usual we tell the user what is this program for
    // Then ask him for number in degrees
    printf("give me the angle in degrees:   \n");
    scanf("%lf", &degrees);

    radians = Rad(degrees);
    ctg = 1 / (tan(radians)); //operation to convert Tan to Ctg
    csc = 1 / (sin(radians)); //operation to convert Sin to Csc
    sec = 1 / (cos(radians)); //operation to convert Cos to Sec

    printf("The value of %lf degrees in radians is: %lf\n", degrees, radians);
    printf("Cos = %lf\n Sin = %lf\n Tan = %lf\n", cos(radians), sin(radians), tan(radians));

    if (radians == PI || radians == 0) { //If radians is equals to pi or zero, Csc and Ctg becomes infinit
        printf("Sec = %lf\n Csc = infinit\n Ctg = infinit", sec);
    } else {
        printf("Sec = %lf\n Csc = %lf\n Ctg = %lf\n ", sec, csc, ctg);
    }
    return 0;
}


