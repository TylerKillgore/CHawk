#include <stdio.h>
#include <stdlib.h>

void getNames(char **someArray, int lengthOfArray) {

char* names_arr[] = { 
	"John",
	"William",
	"James",
	"Charles",
	"George",
	"Frank",
	"Joseph",
	"Thomas",
	"Henry",
	"Robert",
	"Edward",
	"Harry",
	"Walter",
	"Arthur",
	"Fred",
	"Albert",
	"Samuel",
	"David",
	"Louis",
	"Joe",
	"Charlie",
	"Clarence",
	"Richard",
	"Andrew",
	"Daniel",
	"Ernest",
	"Will",
	"Jesse",
	"Oscar",
	"Lewis",
	"Peter",
	"Benjamin",
	"Frederick",
	"Willie",
	"Alfred",
	"Sam",
	"Roy",
	"Herbert",
	"Jacob",
	"Tom",
	"Elmer",
	"Carl",
	"Lee",
	"Howard",
	"Martin",
	"Michael",
	"Bert",
	"Herman",
	"Jim",
	"Francis",
	"Harvey",
	"Earl",
	"Eugene",
	"Ralph",
	"Ed",
	"Claude",
	"Edwin",
	"Ben",
	"Charley",
	"Paul",
	"Edgar",
	"Isaac",
	"Otto",
	"Luther",
	"Lawrence",
	"Ira",
	"Patrick",
	"Guy",
	"Oliver",
	"Theodore",
	"Hugh",
	"Clyde",
	"Alexander",
	"August",
	"Floyd",
	"Homer",
	"Jack",
	"Leonard",
	"Horace",
	"Marion",
	"Philip",
	"Allen",
	"Archie",
	"Stephen",
	"Chester",
	"Willis",
	"Raymond",
	"Rufus",
	"Warren",
	"Jessie",
	"Milton",
	"Alex",
	"Leo",
	"Julius",
	"Ray",
	"Sidney",
	"Bernard",
	"Dan",
	"Jerry",
	"Calvin"};
	for(int i=0;i<lengthOfArray;i++){
		someArray = names_arr[i];
	}	
}