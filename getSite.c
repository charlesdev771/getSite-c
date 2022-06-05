
/*
##====================================================================##
##                                                                    ##
## SOFTWARE: getSite c.                                               ##
## AUTHOR: Charles Dantas (chameleon)                                 ##
## VERSION: 1.0                                                       ##
## CREATION DATE: 05/06/2022                                          ##
##                                                                    ##
##====================================================================##
*/

//Librarys
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//;


#define sizeUrl 100 ///Max size of url


void getSite(); //prototype of getSite function


int main(int argc, char *argv[])

{

    getSite(); //Call the getSite function
    
    return 0;

}

void getSite() //Function that takes the site
{

    char url[sizeUrl];
    char download[100] = "wget -r -erobots=off "; //Command that takes the site 
    
    printf("Url of site: ");
    fgets(url, sizeUrl, stdin); //Take the url

    strcat(download, url); ///Combine the two commands
    system(download); //Execute the command

}