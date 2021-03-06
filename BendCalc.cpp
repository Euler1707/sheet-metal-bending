#include <cstdlib>
#include <iostream>
#include<cmath>

using namespace std;

int main(int argc, char *argv[])
{
   //Preamble
   
  
   cout << endl;
   cout << "            ********************************"<< endl;
   cout << "            *SHEETMETAL BEND CALCULATOR 1.0*" << endl;
   cout << "            ********************************"<< endl;
   cout <<endl;
   cout << "                 Written by: Edgar Colin" << endl;
   cout << endl;
   cout << endl;
   
   cout << " Simply follow the instructions given:" << endl;
   cout << endl;
   cout << "  - All angle inputs must be in degrees." << endl; 
   cout << endl;
   cout << "  - If straight lengths are given, answer 'y' to the question asked, else," << endl;
   cout << "    the term length refers to the distance from the vertex of the angle" << endl; 
   cout << "    to the end of the plate. Refer to the instructions manual for details." << endl;
   cout << endl;
   cout << endl;
   //Declaration of Variables
    
    double BA(0);
    double a;
    double r;
    double t(0);
    double sub(0);
    double A;
    double sum(0);
    double MH(0);
    char C;
    int n;
    
    //Material Parameters
    
    cout << " Please enter thickness of the material" << endl;
    cout << endl;
    cout << " Thickness = ";
    cin >> t; 
    cout << endl;
    cout << " Please enter the number of bends" << endl;
    cout << endl;
    cout << " Number of Bends = ";
    cin >> n;
    cout << endl;
    cout << endl;
      
    cout << " Are you given straight lengths? (y/n)  ";  
    cin >> C;
    cout << endl;
    cout << endl;
    
    if(C =='n'){
   
         cout << " Vertex to end calculation " << endl;
         cout << endl;
         cout << endl;  
         for (int i =1;i<=n;i++){
        
             cout << " Bend Number " << i << endl;
             cout << endl;
        
             cout << "    Please enter radius number " << i << endl;
             cout << endl;
        
              cout << " R"<<i<<" = ";
              cin >> r; 
              cout << endl;
        
              cout << "    Please enter angle number " << i << endl;
              cout << endl;
        
              cout << " Angle"<<i<<" = ";
              cin >> A;
              cout << endl;
        
              sub = sub-2*tan(A*acos(-1)/360)*(t+r);
        
              BA = BA + 2*acos(-1)*(A/360)*(.33*t+ r);
              MH = MH+(A/90)*(.71*t+1.57*r);
              } 
        
      
         for (int j =1;j<=n+1;j++){
               cout << " Please enter length number " << j << endl;
               cout << endl;
        
               cout << " L"<<j<<" = ";
               cin >> a; 
               cout << endl;
        
               sum = sum + a;
               } 
        
         cout << " The final length of your sheetmetal must be" << endl;
         cout << endl;
         cout << "      Lf = "<<sum + sub + MH << ":)";
         cout << endl;
         cout << endl;   
         cout << endl;
         cout << "      ***************************************" << endl;
         cout << "      *  'ITS A GOOD DAY!'-BRENT HIGHTOWER  *" << endl;
         cout << "      ***************************************" << endl;
         cout << endl;
         cout << endl;

}else{
         cout << " Straight lengths are given: " << endl;
         cout << endl;
         cout << endl;  
         
         for (int i =1;i<=n;i++){
              
              cout << " Bend Number " << i << endl;
              cout << endl;
        
              cout << "    Please enter radius number " << i << endl;
              cout << endl;
        
              cout << " R"<<i<<" = ";
              cin >> r; 
              cout << endl;
        
              cout << "    Please enter angle number " << i << endl;
              cout << endl;
        
              cout << " Angle"<<i<<" = ";
              cin >> A;
              cout << endl;
        
              sub = sub-2*tan(A*acos(-1)/360)*(t+r);
        
              BA = BA + 2*acos(-1)*(A/360)*(.33*t+ r);
              MH = MH+(A/90)*(.71*t+1.57*r);
        } 
        
      
        for (int j =1;j<=n+1;j++){
            cout << " Please enter length number " << j << endl;
            cout << endl;
        
            cout << " L"<<j<<" = ";
            cin >> a; 
            cout << endl;
        
            sum = sum + a;
        
        } 
        
        cout << "    The final length of your sheetmetal must be" << endl;
        cout << endl;
        cout << "      Lf = "<<sum + 0 + MH ;
        cout << endl;
        cout << endl;   
        
        /*cout << endl;
        cout << "      Lf2 = "<<sum + 0 + BA << ":)";
        cout << endl;
        cout << endl; 
        */
        cout << endl;
        cout << "      ***************************************" << endl;
        cout << "      *  'ITS A GOOD DAY!'-BRENT HIGHTOWER  *" << endl;
        cout << "      ***************************************" << endl;
        cout << endl;
        cout << endl;
     
     
     }
     
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
