#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctime>

using namespace std;

void wish(){
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time -> tm_hour < 12)
    {
        cout<<"GOOD MORNING"<<endl;
        string phrase = "GOOD MORNING";
        string command = "espeak \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time -> tm_hour>=12 && time -> tm_hour<=16)
    {
        cout<<"GOOD AFTERNOON"<<endl;
         string phrase = "GOOD AFTERNOON";
        string command = "espeak \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time -> tm_hour >= 16 && time -> tm_hour <= 24)
    {
        cout<<"GOOD EVENING"<<endl;
         string phrase = "GOOD EVENING";
        string command = "espeak \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
}
void time(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"Date and Time is "<<endl<<dt<<endl;
} 

int main(){
    system("cls");
    cout<<"\t\t\t<========================================= W E L C O M E =================================================>"<<endl;
    cout<<"\t\t\t<===================================== I'M A VIRTUAL ASSISTANT ===========================================>"<<endl;
    cout<<"\t\t\t<======================================== MY NAME IS JARVIS ==============================================>"<<endl;
    cout<<"\t\t\t<====================================== I'M HERE TO HELP YOU =============================================>"<<endl<<endl;

    char passward[20],ch[100];
    do
    {
        cout<<"<===========================>"<<endl;
        cout<<"|    ENTER YOUR PASSWORD    |"<<endl;
        cout<<"<===========================>"<<endl;
        string phrase = "enter your passward";
        string command = "espeak \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        gets(passward);
        STARTUPINFO startInfo ={0};
        PROCESS_INFORMATION processInfo ={0};
        if(strcmp(passward,"meghna")==0)
        {
            cout<<"\n<==============================================================================================================>\n";
            wish();
            do
            {
                cout<<"\n<==============================================================================================================>\n";
                cout<<endl<<"How Can I Help You......\n";
                cout<<"Your query ===> ";
                string phrase = "How Can I Help You";
                string command = "espeak \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                gets(ch);
                cout<<endl;
                if(strcmp(ch,"hi")==0||strcmp(ch,"hey")==0||strcmp(ch,"hello")==0){
                    cout<<"Hello...."<<endl;
                }
                else if(strcmp(ch,"stop")==0||strcmp(ch,"exit")==0||strcmp(ch,"bye")==0){
                    cout<<"Good bye have a nice day!!!!!"<<endl;
                    string phrase = "Good bye have a nice day";
                    string command = "espeak \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if(strcmp(ch,"who are you")==0||strcmp(ch,"tell me about yourself")==0||strcmp(ch,"about")==0){
                    cout<<"I am Jarvis a virtual assistant !!!!!"<<endl;
                    string phrase = "I am Jarvis a virtual assistant";
                    string command = "espeak \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch,"how are you")==0||strcmp(ch,"whatsup")==0||strcmp(ch,"how is your day")==0){
                    cout<<"I am good , tell me how can i help you...."<<endl;
                    string phrase = "I am good tell me";
                    string command = "espeak \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch,"time")==0||strcmp(ch,"date")==0){
                   time();
                }
                else if(strcmp(ch,"open notepad")==0){
                   cout<<"Opening notepad....."<<endl;
                  CreateProcess(TEXT("C:\\Windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);

                }
                else if(strcmp(ch,"open google")==0){
                   cout<<"Opening google....."<<endl;
                   system("start https://www.google.com");
                   }
                else if(strcmp(ch,"open youtube")==0){
                   cout<<"Opening Youtube....."<<endl;
                   system("start https://www.youtube.com");
                   }
                else{
                    cout<<"Sorry could not understand your query please try again!!!!!"<<endl;
                    string phrase = "Sorry could not understand your query please try again";
                    string command = "espeak \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            } while (1);
            

           
        }
        else{
            cout<<"INCORRECT PASSWORD"<<endl;
            string phrase = "INCORRECT PASSWORD";
                    string command = "espeak \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
        }
    } while (1);
    

    return 0;
}