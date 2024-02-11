/*
This file is used only for development process as it contains the functions related to the 
trignometry. Any change in this file can cause the change in function or its output. 
If you are a contributer so we Welcome you and encourage you to solve any bug in this code.
Developer: hassaannonari@gmail.com (Muhammad Hassaan)
*/



#include"lib.cpp"
using namespace std;

//Following class contains the functions that are used for the general calculations such as calculations for the values of sin, cos and tan etc.
class basicFunctions{
    public:
     float DegToRad(float deg){
        float rad;
        rad = (deg*3.1416)/180;
        return rad;
        
    }

    float sinValue(float deg){
        float rad = DegToRad(deg);
        return sin(rad);
    }
    float cosValue(float deg){
        float rad = DegToRad(deg);
        return cos(rad);
    }
    float tanValue(float deg){
        float rad = DegToRad(deg);
        return tan(rad);
    }
    float cosecantValue(float deg){
        return 1/(sinValue(deg));
    }
    float secantValue(float deg){
        return 1/(cosValue(deg));
    }
    float cotangentValue(float deg){
        return 1/(tanValue(deg));
    }
     //Following function finds the third Angle when two angles are given in the triangle
    float thirdAngleFinder(float X, float Y){
        float Z = (180-X-Y);
        return Z;
    }
};

//Following is the function that is used for the basic or fundamental identities of trignomatery.
class fundamentalIdentities{
    public:
    //Following cos,sin and tan functions takes the float parameters in the radian so if you want to calculate the degree value so you have to convert it into the radians by the above function.
    float cosxBySinx(float sinx){
        float cx;
        cx = sqrt(1-pow(sin(sinx),2));
        return cx;
    }
    float sinxByCosx(float cosx){
        float sx;
        sx = sqrt(1-pow(cos(cosx),2));
        return sx;
    }
    float tanxBySecx(float secx){
        float tx = sqrt(pow(1/(cos(secx)),2)-1);
        return tx;
    }
    float tanxByCosecx(float cosec){
        float cot;
        cot = sqrt(pow(cos(cosec),2)-1);
       float tan2 = 1/cot;
        return tan2;
    }
    float sinxByTanx(float tanx){
        float cosecx;
        cosecx = sqrt(1+pow(1/tan(tanx),2));
       float sinx = 1/cosecx;
        return sinx;
    }
    float cosxByTanx(float tanx){
        float secx;
        secx = sqrt(1+pow(tan(tanx),2));
        float cosx = 1/secx;
        return cosx;
    }
    float tanxBySinxCosx(float sinx, float cosx){
        float tanx ;
        tanx =sinx/cosx;
        return tanx;
    }
    
   
};

//Following class contains all the distance related formula (Possible)
class OrderDistance{
    public:
    //Following function is used to calculate the distance when the orders are given of two points let P and Q such as P(x1, y1) and Q(x2, y2)
    float distanceForOrders(float x1, float y1, float x2, float y2){
        float d = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        return d;
    }
};



    //Following are the functions for the trignometric laws which are very fundamental. For Example: cos(a+b), sin(a+b) and tan(a+b). Same is the case of negative.
class fundamental_Laws{
    public:
    float cosNegative(float a, float b){
        float cosneg = (cos(a)*cos(b))+(sin(a)*sin(b));
        return cosneg;
    }
    float cosPositive(float a, float b){
        float cospos = (cos(a)*cos(b))-(sin(a)*sin(b));
        return cospos;
    }

    float sinNegative(float a, float b){
        float sinneg = (sin(a)*cos(b))-(cos(a)*cos(b));
        return sinneg;
    }
    float sinPositive(float a, float b){
        float sinpos = (sin(a)*cos(b))+(cos(a)*cos(b));
        return sinpos;
    }

    float tanPositive(float a, float b){
        float tanpos = (tan(a)+tan(b))/(1-tan(a)*tan(b));
        return tanpos;
    }
    float tanNegative(float a, float b){
        float tanneg = (tan(a)-tan(b))/(1+tan(a)*tan(b));
        return tanneg;
    }
};


//Following is the class that can be used to find the different Angle Identities such as Double, half and triple.
class angle_Identities{
    public:

    //Following are the Double angle identities.
    float sinDoubleAngleId(float a){
        float s2a;
        s2a = 2*sin(a)*cos(a);
        return s2a;
    }

    float cosDoubleAngleId(float a){
        float c2a = pow(cos(a),2)-pow(sin(a),2);
        return c2a;
    }
    float cosDoubleAngleIdByCos(float a){
        float c2a = (2*pow(cos(a),2))-1;
        return c2a;
    }
    float cosDoubleAngleIdBySin(float a){
        float c2a = 1-(2*pow(sin(a),2));
        return c2a;
    }

    float tanDoubleAngleId(float a){
        float tan2a= (2*tan(a))/(1-pow(tan(a),2));
        return tan2a;
    }

    //Following are the Half Angle Identities.
    float cosHalfAngleId(float a){
        float cosHalf = sqrt((1+cos(a)/2));
        return cosHalf;
    }
    float sinHalfAngleId(float a){
        float sinHalf = sqrt((1-cos(a)/2));
        return sinHalf;
    }
    float tanHalfAngleId(float a){
        float tanHalf = (sinHalfAngleId(a)/cosHalfAngleId(a));
        return tanHalf;
    }

    //Following are the Triple Angle Identities.
    float sinTripleAngleId(float a){
        float sin3a = (3*sin(a))-(4*pow(sin(a),3));
        return sin3a;
    }
    float cosTripleAngleId(float a){
        float cos3a = (4*pow(cos(a),3))-(3*cos(a));
        return cos3a;
    }
    float tanTripleAngleId(float a){
        float tan3a = ((3*tan(a))-pow(tan(a),3))/(1-(3*pow(tan(a),2)));
        return tan3a;
    }
};

//Following is the class that contains the functions related to the Sum-to-Product and Product-to-Sum Formulae of trignometry.
class sum_And_Product{
    public:

    //Following formulae are for Product-to-Sum
    void sinProductCosToSum(float a, float b){
        cout<<"1/2[sin("<<a+b<<") + sin("<<a-b<<")]"<<endl;
    }
    void cosProductSinToSum(float a, float b){
        cout<<"1/2[sin("<<a+b<<") - sin("<<a-b<<")]"<<endl;
    }
    void cosProductCosToSum(float a, float b){
        cout<<"1/2[cos("<<a+b<<") + cos("<<a-b<<")]"<<endl;
    }
    void sinProductSinToSum(float a, float b){
        cout<<"-1/2[cos("<<a+b<<") -cos("<<a-b<<")]"<<endl;
    }

    //Following formulae are for Sum-to-Product
    void sinSumSinToProduct(float P, float Q){
        cout<<"2sin"<<(P+Q)/2<<"cos"<<(P-Q)/2<<endl;
    }
    void sinDifferenceSinToProduct(float P, float Q){
        cout<<"2cos"<<(P+Q)/2<<"sin"<<(P-Q)/2<<endl;
    }
    void cosSumCosToProduct(float P, float Q){
        cout<<"2cos"<<(P+Q)/2<<"cos"<<(P-Q)/2<<endl;
    }
    void cosDifferenceCosToProduct(float P, float Q){
        cout<<"-2sin"<<(P+Q)/2<<"sin"<<(P-Q)/2<<endl;
    }

};

//Following is the class used to display the periods of all the trignometric functions.
class periodsOfFunctions{
    public:
    void display(void){
        cout<<"1. The Period of Sine is: 2pi"<<endl
        <<"2 .The Period of Cosine is: 2pi"<<endl
        <<"3 .The Period of Tangent is: 1pi"<<endl
        <<"4. The Period of Cosecant is: 2pi"<<endl
        <<"5. The Period of Secant is: 2pi"<<endl
        <<"6. The Period of Cotangent is: 1pi"<<endl;
    }
};


//Following functions are for the Laws of Cosine
class lawsOfCosine{
    public:
    basicFunctions x;

    //Following three functions will find the third side of triangle by using the laws of cosine when two sides and one angle is provided.
    float bcIsGiven(float b, float c, float angleA){
        float a2 = pow(b, 2)+pow(c,2)-(2*b*c*x.cosValue(angleA));
        return a2;
    }

    float acIsGiven(float a, float c, float angleB){
        float b2 = pow(a, 2)+pow(c,2)-(2*a*c*x.cosValue(angleB));
        return b2;
    }

    float abIsGiven(float a, float b, float angleC){
        float c2 = pow(a, 2)+pow(b,2)-(2*a*b*x.cosValue(angleC));
        return c2;
    }

    //Following functions finds the missing angle when three of the sides are provided.
    void cosAlpha(float a, float b, float c){
        cout<<"cosA="<<((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
    }
    void cosBeta(float a, float b, float c){
        cout<<"cosB="<<((pow(c,2)+pow(a,2)-pow(b,2))/(2*a*c));
    }
    void cosGamma(float a, float b, float c){
        cout<<"cosY="<<((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
    }
};

//Following is the class that contains all the functions related to the laws of sine.
class lawsOfSine:  public lawsOfCosine{
    public:
    //Following function will give value of side 'b' when side 'a' and angle 'alpha' and 'beta' are given.
    float asinABIsGiven(float a, float A, float B){
        float b = (a*x.sinValue(B))/(x.sinValue(A));
        return b;
    }

    //Following function will give value of side 'a' when side 'b' and angle 'alpha' and 'beta' are given.
    float bsinABIsGiven(float b, float A, float B){
        float a = (b*x.sinValue(A))/(x.sinValue(B));
        return a;
    }

    //Following function will give value of side 'c' when side 'b' and angle 'gamma' and 'beta' are given.
    float bsinBCIsGiven(float b, float B, float C){
        float c = (b*x.sinValue(C))/(x.sinValue(B));
        return c;
    }

    //Following function will give value of side 'b' when side 'c' and angle 'gamma' and 'beta' are given.
    float csinBCIsGiven(float c, float B, float C){
        float b = (c*x.sinValue(B))/(x.sinValue(C));
        return b;
    }

    //Following function will give value of side 'c' when side 'b' and angle 'alpha' and 'beta' are given.
    float asinACIsGiven(float a, float A, float C){
        float c = (a*x.sinValue(C))/(x.sinValue(A));
        return c;
    }

    //Following function will give value of side 'a' when side 'b' and angle 'gamma' and 'alpha' are given.
    float csinACIsGiven(float c, float A, float C){
        float a = (a*x.sinValue(A))/(x.sinValue(C));
        return a;
    }

    //In future, we may add the feature to find the angles using the laws of sine. But at this time we are at initial development phase. Thanks for your concern. But if you can do it so We really welcome you to add additional feature.
};

//Following class contains the Functions related to the laws of tangent.
class lawsOfTangent : public lawsOfSine{
    public:
    void angleABIsGiven(float A, float B){
        cout<<"(a-b)/(a+b)  =  tan"<<(A-B)/2<<"/tan"<<(A+B)/2<<endl;
    }
    void angleACIsGiven(float A, float C){
        cout<<"(a-c)/(a+c)  =  tan"<<(A-C)/2<<"/tan"<<(A+C)/2<<endl;
    }
    void angleBCIsGiven(float B, float C){
        cout<<"(b-c)/(b+c)  =  tan"<<(B-C)/2<<"/tan"<<(B+C)/2<<endl;
    }
};

//Following class is used to calculate the area of Triangle
class areaOfTriangle{
    public:
    //All area formulae use sine
    float S(float a, float b, float c){
        float s = (a+b+c)/2;
        return s;
    }
    basicFunctions x;
    float bcsinAIsGiven(float b, float c, float A){
        float area = (b*c*x.sinValue(A))/2;
        return area;
    }
    
    float acsinBIsGiven(float a, float c, float B){
        float area = (a*c*x.sinValue(B))/2;
        return area;
    }

    float absinCIsGiven(float a, float b, float C){
        float area = (a*b*x.sinValue(C))/2;
        return area;
    }

    float csinABCIsGiven(float c, float A, float B, float C){
        float area = (pow(c,2)*x.sinValue(A)*x.sinValue(B))/(2*x.sinValue(C));
        return area;
    }

    float bsinABCIsGiven(float b, float A, float B, float C){
        float area = (pow(b,2)*x.sinValue(A)*x.sinValue(C))/(2*x.sinValue(B));
        return area;
    }

    float asinABCIsGiven(float a, float A, float B, float C){
        float area = (pow(a,2)*x.sinValue(B)*x.sinValue(C))/(2*x.sinValue(A));
        return area;
    }

    // Following is Hero's Formula which is used to calculate area of triangle when three sides of triangle are given.
    float herosFormula(float a, float b, float c){
        float s = S(a, b, c);
        float area = sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }

    
};

//Following class(Derived class) is inherited publically by the class of areaOfTriangle(which is base class)
//Following class is used to find the radii of triangle w.r.t. circle
    class radiiOfTriangle : public areaOfTriangle{
        public:
    //Following R is used to represent the circum-radius.
    float R(float a, float b, float c)    {
        float r = (a*b*c)/(4*herosFormula(a,b,c));
        return r;
    }

    //Following r represents the in-radius.
    float r(float a, float b, float c){
        float r = (herosFormula(a,b,c)/S(a,b,c));
        return r;
    }

    //There are three in-radii of a triangle which can be determined by following formulae.
    float r1(float a, float b, float c){
        float r1 = (herosFormula(a,b,c))/(S(a,b,c)-a);
        return r1;
    }
    float r2(float a, float b, float c){
        float r2 = (herosFormula(a,b,c))/(S(a,b,c)-b);
        return r2;
    }
    float r3(float a, float b, float c){
        float r3 = (herosFormula(a,b,c))/(S(a,b,c)-c);
        return r3;
    }

    };

//Following class uses pythagoras theorem to find the third side in the right angle triangle when two sides are given.
    class pythagoras{
        public:
    float findc(float a, float b){
        float c =  sqrt((pow(a,2))+(pow(b,2)));
        return c;
    }
    float findb(float a, float c){
        float b =  sqrt((pow(c,2))-(pow(a,2)));
        return b;
    }
    float finda(float b, float c){
        float a =  sqrt((pow(c,2))+(pow(b,2)));
        return a;
    }
    };


//The Functions are defined. If you wanna contribute so please welcome and you can also add new functions if you know about trignometry here.
//Contact: hassaannonari@hotmail.com and hassaannonari@gmail.com