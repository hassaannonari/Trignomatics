//This file contains the definition from Mathematics book 1st year Intermediate PTB
//Thanks to Umer for Composing these definitions for us.
#include"lib.cpp"
using namespace std;
class definitions{
    public:
    void defines(void){
        cout<<"Welcome to our Definition Section! Choose a definition from below: "<<endl;
        cout<<"1. Trignometry"<<endl
        <<"2. Circular System"<<endl
        <<"3. Degree"<<endl
        <<"4. Radian"<<endl
        <<"5. Angle"<<endl
        <<"6. Co-terminal Angle"<<endl
        <<"7. Trignometric Functions"<<endl
        <<"8. Fundamental Laws of Trigonometry"<<endl
        <<"9. Allied angle"<<endl
        <<"10. Periodicity"<<endl
        <<"11. Periods"<<endl
        <<"12. Angle of Elevation"<<endl
        <<"13. Angle of Depression"<<endl
        <<"14. Oblique triangle"<<endl
        <<"15. Circum circle"<<endl
        <<"16. In-circle"<<endl
        <<"17. Escribed circle"<<endl;
        int input;
        cin>>input;
        if (input==1)
        {
            cout<<"Trignometry:"<<endl<<"It is an important branch of Mathematics. The word Trigonometry has been derived from three Greek words: Trie means Three, Goni means angles, and Matron means measurements. It means that measurement of triangle."<<endl;
        }
        else if (input==2)
        {
            cout<<"Circular system:"<<endl<<"There is another system of angular measurement, called the Circular system."<<endl;
        }else if (input==3)
        {
            cout<<"Degree:"<<endl<<"If we divide the circle into 360 equal parts and one part is called Degree."<<endl;
            
        }else if (input==4)
        {
            cout<<"Radian:"<<endl<<"It is the measure of the angle subtended at the center of the circle by an arc, whose length is equal to the radius."<<endl;
            
        }else if (input==5){
            cout<<"Angle:"<<endl<<"Two rays with a common starting point are called angle. One ray is called Initial side and the other ray is called Terminal side."<<endl;
            
        }else if (input==6)
        {   
            cout<<"Conterminal angle:"<<endl<<"There can be many angles with the same initial and terminal sides is called conterminal angle."<<endl;
        }else if (input==7)
        {
            cout<<"Trigonometric functions"<<endl<<"Ratios depend only the side of angle and not on the triangle formed. These ratios are called trigonometric functions."<<endl;
            
        }else if (input==8)
        {
            cout<<"Fundamental law of trigonometry:"<<endl<<"Let a and b two angles:"<<endl<<"Cos (a-b) = cosacosb+sinasinb    which is called the fundamental law of trigonometry."<<endl;
            
        }else if (input==9)
        {
            cout<<"Allied angle:"<<endl<<"These angle associated with basic angle of measure to the right angle or its multiple is called Allied angle."<<endl;
            
        }else if (input==10)
        {
            cout<<"Periodicity:"<<endl<<"The value of trigonometric functions for ϴ and 2(22/7)ϴ where ϴ E R and n E Z are same."<<endl;
            
        }else if (input==11)
        {
            cout<<"Periods:"<<endl<<"It is the trigonometric function  is the smallest +ve number which, when added to the original circular measure of the angle, gives th same value of the function."<<endl;
            
        }else if (input==12)
        {
            cout<<"Angle of Elevation:"<<endl<<"If we looking above from the horizontal line, we have to raise our eyes, and this angle is called Angle of elevation."<<endl;
            
        }else if (input==13)
        {
            cout<<"Angle of Depression:"<<endl<<"If we look below from the horizontal line , we have to lower our eyes, and this angle is called Angle of depression."<<endl;
            
        }else if (input==14)
        {
            cout<<"Oblique triangle:"<<endl<<"A triangle, which is not right, is called an Oblique triangle."<<endl;
            
        }else if (input==15)
        {
            cout<<"Circum circle:"<<endl<<"The circle passing through the vertices of triangle is called Circum circle."<<endl;
            
        }else if (input==16)
        {
            cout<<"In circle:"<<endl<<"The circle drawn inside the triangle touching its three vertices is called In circle."<<endl;
        }else if (input==17)
        {
            cout<<"Escribed circle:"<<endl<<"A circle which touch one side of triangle and other two sides produced externally is called Escribed circle."<<endl;
        }else if (input==18)
        {
            cout<<"Solution of triangle: "<<endl<<"This process of finding the unknown elements is called solution of the triangle."<<endl;
        }
        
        else
        {
            cout<<"Sorry! You have entered wrong parameters..."<<endl;
        }
        cout<<"Thanks to Umer for Composing these Definintions..."<<endl;
    }
};