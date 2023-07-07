#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
    
    int i; //Hold length of string
    
    for(i = 0; str[i] != '\0'; i++);

    cout << "Length of string is: " << i;
	
    return 0;
}

Write a program to display string from backward.

#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
    
    int l; //Hold length of string
    
    //Find the length of the string
    for(l = 0; str[l] != '\0'; l++);

    //Display the string backwards
    for(int i = l - 1; i >= 0; i--)
    {
        cout << str[i];
    }			
	
    return 0;
}

Write a program to count number of words in string
#include<iostream>
using namespace std;

int main( )
{
	char str[80];
	
	cout << "Enter a string: ";
	cin.getline(str,80);
	
	int words = 0; // Holds number of words
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ') //Checking for spaces
		{
			words++;
		} 		
	}

	cout << "The number of words = " << words+1 << endl;

	return 0;
}

 Write a program to concatenate one string contents to another. 
 #include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];

    cout<<"Enter first string: ";
    cin.getline(str1, 80);
    
    cout<<"Enter second string: ";
    cin.getline(str2, 80);

    int l = 0; //Hold length of first string
    
    //Find length of first string.
    for(l = 0; str1[l] != '\0'; l++);

    //Adding second string content in first
    for(int i = 0; str2[i] != '\0'; i++)
    {
        str1[l++] = str2[i];
    }
	
    str1[l] = '\0';

    cout << "\nThe first string after adding second string content:\n\n" << str1;			
	
    return 0;
}
Write a program to compare two strings they are exact equal or not

#include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];

    cout<<"Enter first string: ";
    gets(str1);

    cout<<"Enter second string: ";
    gets(str2);

    int i;
    for (i = 0; str1[i] == str2[i] && str1[i]!= '\0' && str2[i] != '\0'; i++);

    if(str1[i] - str2[i] == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}

Write a program to check a string is palindrome or not.
#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
	
    int l; //Hold length of string
    
    //finding length of string
    for(l = 0; str[l] != '\0'; l++);

    //Comparing first element with last element till middle of string 
    int i;
    for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++);

    if(i == l/2)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
	
    return 0;
}
Write a program to convert a string in lowercase.
#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
    
    for(int i=0;str[i]!='\0';i++)
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
    }

    cout<<"Lowercase string: " << str << endl;
	
    return 0;
}
