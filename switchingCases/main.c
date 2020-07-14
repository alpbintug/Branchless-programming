#include <stdio.h>
#include <time.h>
#include <string.h>

void branched_switchCases(char *string, int size) {

	int i;
	for (i = 0; i < size; i++) {
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] = string[i] - 32;
		else if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] = string[i] + 32;
	}
}

void branchless_switchCases_1(char* string, int size) {
	int i;
	for (i = 0; i < size; i++) {
		string[i] = ((string[i]+32) * (string[i] >= 'A' && string[i] <= 'Z')) + (string[i] - 32) * (string[i] >= 'a' && string[i] <= 'z') + string[i]*(!(string[i] >= 'a' && string[i] <= 'z')&&!(string[i] >= 'A' && string[i] <= 'Z'));
	}
}

void branchless_switchCases_2(char* string, int size) {
	int i;
	for (i = 0; i < size; i++) {
		string[i] -= 32 * (string[i] >= 'a' && string[i] <= 'z') -32* (string[i] >= 'A' && string[i] <= 'Z');
	}
}
int main()
{
	//Generated text from www.lipsum.com
	char string[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam at ex condimentum, lacinia dolor vel, elementum felis. Proin mi nibh, facilisis mattis dictum a, aliquam eu lorem. Vestibulum ullamcorper diam ultrices felis eleifend sagittis. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam faucibus, felis eget porttitor faucibus, mi diam dignissim neque, vitae consectetur justo orci a diam. Suspendisse turpis augue, scelerisque sit amet orci sed, sollicitudin tincidunt turpis. Integer viverra vulputate augue ac pretium. Pellentesque eget massa sed orci rhoncus congue vel eu est.Cras ultricies tincidunt aliquet.Maecenas vulputate enim at purus laoreet, ac tincidunt neque feugiat.Integer hendrerit semper dolor sit amet vulputate.Nulla vulputate leo ac ipsum sodales commodo.Nunc auctor fringilla dui, eu dignissim urna dapibus ut.In vel mauris commodo, commodo odio vitae, pellentesque ipsum.Aenean at augue id odio mollis auctor ut quis turpis.Vestibulum lacinia molestie neque in ultrices.Sed vel purus et justo vestibulum tristique eget non sem.In gravida erat id sagittis bibendum.Aenean rhoncus mi eget posuere scelerisque.Morbi fringilla leo in ipsum varius, ac egestas est bibendum.Nullam metus velit, molestie ac posuere egestas, volutpat eu dolor.Donec eget libero ex.Pellentesque pulvinar pretium massa, vitae tincidunt turpis gravida et.Praesent gravida semper metus nec condimentum.Aliquam malesuada varius varius.Pellentesque hendrerit placerat neque, nec faucibus sapien tincidunt quis.	Aliquam id condimentum orci.Sed massa odio, interdum et vulputate in, pellentesque sed massa.Aliquam tincidunt et orci et congue.Aliquam tincidunt ante lectus, vitae tincidunt felis sodales non.Morbi sagittis quam sem, at maximus erat scelerisque sed.Nulla eget faucibus dui.Pellentesque quis fringilla magna.Vestibulum ut nisi id urna congue molestie.Aenean feugiat scelerisque quam.Nunc scelerisque ultrices lacus vitae consequat.Morbi facilisis sit amet turpis ac facilisis.Phasellus ornare orci libero, nec porttitor tortor finibus vitae.	Sed convallis non sapien in tempor.Sed eget dictum felis, sit amet mattis massa.Proin euismod velit at lobortis condimentum.Quisque aliquet, lacus ac semper efficitur, metus ante rhoncus mauris, eu dictum justo mauris a nisi.Etiam vel diam consequat odio pharetra pellentesque sed ac tortor.Cras egestas nisl a dui porta maximus.In vehicula sagittis est, eget lobortis leo placerat quis.Donec ac sagittis urna, vel tincidunt dolor.Nullam et turpis eu neque finibus luctus.Maecenas arcu dolor, rhoncus at ultricies sed, porttitor nec dui.Etiam cursus mauris purus, et mollis turpis mollis nec.Phasellus sit amet semper mauris.Proin efficitur lectus eget felis venenatis, eu lacinia odio volutpat.Duis ut placerat justo.Quisque commodo lorem non felis tincidunt, accumsan placerat arcu pharetra.Duis bibendum mi nec ornare suscipit.Donec fermentum placerat neque, et gravida arcu porttitor ut.Integer dictum pharetra vehicula.Donec viverra diam eget diam rhoncus placerat.Aliquam erat volutpat.Cras eget sem non odio aliquet molestie.In ullamcorper enim et mauris consequat, at egestas metus pretium.	Nullam id ex magna.In in diam dui.Nunc lacinia dui vel arcu suscipit, nec tempor est pharetra.Nam gravida arcu ipsum, nec pretium neque mollis in.Proin sed hendrerit risus.Proin ultricies purus eget risus dapibus dapibus.Sed id leo interdum, tempus tellus in, vehicula nunc.Integer eu tempor nulla, sed rhoncus justo.Etiam accumsan malesuada diam, id sollicitudin orci lacinia sit amet.Ut rhoncus orci placerat, semper libero non, sollicitudin ante.Ut non erat a purus elementum congue non viverra sapien.Suspendisse eget commodo risus.In sollicitudin felis urna, in ornare diam luctus at.Phasellus metus erat, eleifend vitae pharetra non, molestie ac tortor.Sed vehicula, purus eu convallis convallis, lorem dui consequat nibh, dignissim aliquet lectus purus non ante.In convallis rhoncus mauris.Vivamus eu velit a justo mattis facilisis.Phasellus in sollicitudin dui.In porta leo eget metus porttitor commodo.Phasellus quis mauris id felis eleifend viverra ac ac nulla.Suspendisse sem eros, tristique sit amet sollicitudin id, hendrerit nec leo.	Nam maximus in est eget pharetra.Morbi laoreet tellus pulvinar tristique consequat.Duis eu convallis lacus.Suspendisse vulputate sem aliquet, viverra diam imperdiet, lacinia magna.Aliquam non leo placerat, luctus tellus ac, consectetur metus.Mauris molestie tellus a tortor tincidunt, dignissim accumsan diam fringilla.Nam vitae vestibulum risus.Duis tortor lectus, fringilla id neque nec, sollicitudin mollis risus.Donec et elit est.Nam aliquet tincidunt blandit.Maecenas sit amet est et mauris luctus finibus non id diam.Ut porta fermentum egestas.Nam maximus, purus eget mattis finibus, odio leo euismod felis, eget interdum leo lectus in lorem.Nam vitae metus luctus, efficitur dolor vel, gravida felis.Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.	Morbi condimentum justo sed finibus varius.Duis sed diam urna.Cras eros orci, rutrum ac malesuada eu, dignissim nec est.Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.Pellentesque placerat, augue nec convallis elementum, arcu sapien vulputate arcu, non ullamcorper erat nisi vitae ligula.Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Praesent malesuada mauris id tellus laoreet, vitae posuere neque pretium.Curabitur tristique ex vel libero elementum, vitae blandit urna congue.Pellentesque vel sapien pretium, semper nisl dignissim, mattis lectus.Nunc a dictum dui, eget ornare dui.	Nulla commodo ipsum nec turpis consectetur finibus.Nam eleifend dolor vel luctus posuere.Etiam dictum id purus ac ornare.Maecenas sodales, sem id ornare congue, neque lorem consequat sem, eu facilisis mi sapien a enim.Nunc ornare, ante vitae vulputate lobortis, lectus lectus aliquet quam, ullamcorper volutpat ligula purus eu risus.Cras varius convallis ex, et maximus leo tempus vitae.Vivamus condimentum ornare mi luctus consectetur.Ut quis lacus luctus, dapibus ex sit amet, laoreet eros.Nulla cursus lorem placerat mi suscipit, at sodales elit euismod.Interdum et malesuada fames ac ante ipsum primis in faucibus.In consectetur sit amet tellus eu tempus.Duis feugiat metus quis ex gravida commodo.Curabitur luctus turpis venenatis est egestas, hendrerit vestibulum mauris tincidunt.Vestibulum rhoncus ante ex, non accumsan nisi sodales tempor.Aenean ornare vel lorem eu interdum.Suspendisse accumsan ex ac tellus elementum, a lacinia dui pharetra.Fusce varius risus ut risus lacinia placerat.Integer sed pulvinar mauris.Cras molestie, ligula at semper ullamcorper, odio purus fringilla odio, vel tristique libero leo non tellus.Etiam iaculis mauris sed ligula fermentum lobortis.Maecenas placerat vel libero eu ultricies.Praesent consequat facilisis orci, a porta leo ultrices non.Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.Duis nec mi risus.Fusce mollis purus gravida nisi sagittis, ut viverra enim luctus.Suspendisse vehicula enim non rutrum maximus.Proin eget augue non mauris faucibus vulputate vitae et neque.Pellentesque mattis est et ipsum facilisis scelerisque.Sed sem justo, iaculis quis egestas ut, ornare et nibh.Vestibulum fermentum, lacus id mattis rhoncus, ex ipsum ullamcorper libero, in dictum quam purus a risus.Proin tempus nulla sit amet orci efficitur, ac pretium ligula viverra.Donec mollis non arcu eu convallis.	Curabitur eget purus ac felis rhoncus commodo.Morbi a pulvinar urna.Quisque euismod fringilla suscipit.Curabitur fringilla risus vel massa congue lobortis.Phasellus id magna ante.Phasellus interdum, dolor eu placerat vestibulum, ex elit interdum sem, ut vehicula turpis sem ac neque.Integer eget magna hendrerit, condimentum tortor dictum, feugiat arcu.Quisque quis pulvinar nisi.Integer ultricies ultrices dolor quis aliquam.	Duis sed odio non tortor finibus tristique non id nulla.";
	char *dummy;
	int size = strlen(string), index;
	double execTime;
	clock_t start, end;

	//REPEATING SAME PROCESS TO GET
	//MORE ACCURATE CLOCKS BECAUSE CLOCKS ARE LIMITED
	//TO MILLISECONDS
	start = clock();
	printf("Starting clock: %d, ", start);
	for(index = 0;index < 20000;index++)
	{
		dummy = _strdup(string);
		branched_switchCases(dummy, size);
	}
	end = clock();
	printf("Stopping clock: %d, ", end);
	execTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Execution time for branched code is: %f\n",execTime);


	start = clock();
	printf("Starting clock: %d, ", start);
	for (index = 0; index < 20000; index++)
	{
		dummy = _strdup(string);
		branchless_switchCases_1(dummy, size);
	}
	end = clock();
	printf("Stopping clock: %d, ", end);
	execTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Execution time for branchless code #1 is: %f\n", execTime);

	start = clock();
	printf("Starting clock: %d, ", start);
	for (index = 0; index < 20000; index++)
	{
		dummy = _strdup(string);
		branchless_switchCases_2(dummy, size);
	}
	end = clock();
	printf("Stopping clock: %d, ", end);
	execTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Execution time for branchless code #2 is: %f\n", execTime);



	return 0;
}
