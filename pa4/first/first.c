#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>


	//int Twos(int x) {   //determines if x is a power of 2

		//if(x==0){
			//return 0;
		//}
		//while(x!=1){
			//if((x%2)!=0){
				//return 0;
			//}else{
				//x=x/2;
			//}
		//}
		//return 1;

	//}



	//int main(int argc, char **argv){


		//int reads=0;
		//int writes=0;
		//int hits=0;
		//int misses=0;


		//int csize=atoi(argv[1]);           // cache size
		//int bsize=atoi(argv[4]);           // block size
		//char *assoc;                       // associativity argv[2]
		////char *prepolicy;                   // prefetching policy argv[3]
		////char *policy;                      // replacement policy argv[4]
		//char *poly;
		//char tempStr[100];                 // temporary string used to store info
		//FILE *file=fopen(argv[5],"r");     // trace file


		//assoc=(char*)malloc(sizeof(char*));
		////prepolicy=(char*)malloc(sizeof(char*));
		//poly=(char*)malloc(sizeof(char*));
		//assoc=argv[2];
		//poly = argv[3];
		////prepolicy=argv[3];
		////policy=argv[3];
		//if (argc != 6) {
			//printf("error\n");
			//return 0;
		//}
		//if (strcmp(poly, "lru") != 0 ){
			//printf("wrong poly\n");
			//return 0;
		//}
		
		//// Are the cache and block sizes powers of 2?
		//if((Twos(csize)==0) || (Twos(bsize)==0)){
			//printf("error\n");
			//return 0;
		//}
		////if so then cachelines=csize/bsize
		//int cachelines=csize/bsize;
		//int x,i,sets;
		////Find number of sets based on chosen associativity
		//int alength=strlen(assoc);
		//if(alength==5){       //"assoc"   fully associative cache
			//x=cachelines;
		//}else if(alength==6){    //"direct"   direct-mapped cache
			//x=1;
		//}else if(alength>6){     //"assoc:n"   n-way associative cache
			//for(i=6;i<alength;i++){
				//tempStr[i-6]=assoc[i];
				//x=atoi(tempStr);
			//}	
		//}

		//sets=(csize/(bsize*x));
		//// #offset bits = log base 2 of blocksize, #index bits = log base 2 of #sets
		//int offset=log2(bsize);
		//int indexbits=log2(sets);
		//unsigned long int** cache;
		//cache=(unsigned long int**)malloc(sizeof(unsigned long int*)*cachelines);
		//for(i=0;i<cachelines;i++){
			//cache[i]=(unsigned long int*)malloc(sizeof(unsigned long int)*3);
		//}
		//for(i=0;i<cachelines;i++){
			//cache[i][0]=0; //replacement
			//cache[i][1]=0; //validity
			//cache[i][2]=0; //tag
		//}

		//double exponent;
		//int y,temp2;
		//unsigned long int temp,index,tag,address,prefaddress,preftag,prefindex;
		//char op;

					//// no prefetching

			//while(fscanf(file, "%*x %c %lx", &op, &address) == 2){
				////assign variables to operations/addresses
				////fscanf(file,"%s ", tempStr);
				////if((strcmp(tempStr,"#eof"))!=0){
					////fscanf(file,"%c %lx\n",&op,&address);
					
					//temp=address>>offset;
					//exponent=pow(2,indexbits)-1;
					//index=((int)exponent & temp);
					//tag=address>>(offset+indexbits);
					//y=x*index;
					////traverse to the proper set
					//while((cache[y][1]!=0)&&(cache[y][2]!=tag)&&(y<index*x+x)){
						//y++;
						//if(y==(index*x+x)){
							//break;
						//}
					//}
					//if(y!=(index*x+x)){
						//if(cache[y][1]==0){ //if zero then it is a miss
							////update validity and tag
							//cache[y][1]=1;
							//cache[y][2]=tag;
							//if(op=='W'){
								//writes++;
							//}
							//reads++;
							//misses++;
							////update replacement values
							//for(y=x*index;y<(x*index+x);y++){
								//if(cache[y][1]==1){
									//cache[y][0]=cache[y][0]+1;
								//}
							//}
						//}else{ //tag==tag in cache then it is a hit
							//cache[y][2]=tag;
							//hits++;
							//if(op=='W'){
								//writes++;
							//}
							//if((strcmp(poly,"lru"))==0){   //if policy is LRU, then...
								//temp2=cache[y][0];
								//cache[y][0]=0;
								//for(y=x*index;y<(x*index+x);y++){
									//if((cache[y][1]==1)&&(cache[y][0]<temp2)){
										//cache[y][0]++;
									//}
								//}
							//}
						//}
					//}else{
						//misses++;
						//reads++;
						//if(op=='W'){
							//writes++;
						//}
						//y=index*x;
						//while(cache[y][0]!=x){
							//y++;
						//}
						//cache[y][0]=0;
						//cache[y][2]=tag;
						//for(y=index*x;y<(index*x+x);y++){
							//if(cache[y][1]==1){
								//cache[y][0]=cache[y][0]+1;
							//}
						//}
					//}
				
			//}
			
			//printf("no-prefetch\n");
			//printf("Memory reads: %d\n", reads);
			//printf("Memory writes: %d\n", writes);
			//printf("Cache hits: %d\n", hits);
			//printf("Cache misses: %d\n", misses);

		
		
			//fclose(file);
			
			//file = fopen(argv[5], "r");
			
			
			//for (i = 0; i < cachelines; i++) {
				//cache[i][0] = 0;
				//cache[i][1] = 0;
				//cache[i][2] = 0;
			//}
			
			//reads = 0;
			//writes = 0;
			//hits = 0;
			//misses = 0;
		
		
					//// with prefetching
					
					
			
			////int prefetch;
			
			//while(fscanf(file, "%*x %c %lx", &op, &address) == 2){
				////assign variables to operations/addresses
				////fscanf(file,"%s ", tempStr);
				////prefetch=0;
				////if((strcmp(tempStr,"#eof"))!=0){
					////fscanf(file,"%c %lx\n",&op,&address);
					//temp=address>>offset;
					//exponent=pow(2,indexbits)-1;
					//index=((int)exponent & temp);
					//tag=address>>(offset+indexbits);
					//y=x*index;
					//while((cache[y][1]!=0)&&(cache[y][2]!=tag)&&(y<index*x+x)){
						//y++;
						//if(y==(index*x+x)){
							//break;
						//}
					//}
					//if(y!=(index*x+x)){
						//if(cache[y][1]==0){ //if zero then miss
							//cache[y][1]=1;
							//cache[y][2]=tag;
							//if(op=='W'){
								//writes++;
							//}
							//reads++;
							//misses++;
							//for(y=x*index;y<(x*index+x);y++){
								//if(cache[y][1]==1){
									//cache[y][0]=cache[y][0]+1;
								//}
							//}
						//}else{ //tag==tag in cache then it is a hit
							//cache[y][2]=tag;
							//hits++;
							//if(op=='W'){
								//writes++;
							//}
							//if((strcmp(poly,"lru"))==0){   //if policy is LRU, then...
								//temp2=cache[y][0];
								//cache[y][0]=0;
								//for(y=x*index;y<(x*index+x);y++){
									//if((cache[y][1]==1)&&(cache[y][0]<temp2)){
										//cache[y][0]++;
									//}
								//}
							//}
							////prefetch=1;
						//}
					//}else{
						//misses++;
						//reads++;
						//if(op=='W'){
							//writes++;
						//}
						//y=index*x;
						//while(cache[y][0]!=x){
							//y++;
						//}
						//cache[y][0]=0;
						//cache[y][2]=tag;
						//for(y=index*x;y<(index*x+x);y++){
							//if(cache[y][1]==1){
								//cache[y][0]=cache[y][0]+1;
							//}
						//}
					//}

					
					//prefaddress=address+bsize;
					//preftag=prefaddress>>(offset+indexbits);
					//temp=prefaddress>>offset;
					//prefindex=((int)exponent & temp);
					////if(prefetch==0){

						//y=prefindex*x;
						//while((cache[y][1]!=0)&&(cache[y][2]!=preftag)&&(y<prefindex*x+x)){
							//y++;
							//if(y==(prefindex*x+x)){
								//break;
							//}
						//}

						//if(y!=(prefindex*x+x)){
							//if(cache[y][1]==0){ //cache miss
								//reads++;
								//cache[y][1]=1;
								//cache[y][2]=preftag;
								////replacement values
								//for(i=prefindex*x;i<(prefindex*x+x);i++){
									//if(cache[y][1]==1){
										//cache[y][0]=cache[y][0]+1;
									//}
								//}
							//}

						//}
						//else{
							//if(y==(prefindex*x+x)){
								//reads++;
								//y=prefindex*x;
								//while(cache[y][0]!=x){
									//y++;
								//}
								//cache[y][2]=preftag;
								//cache[y][0]=0;
								////update replacement values
								//for(y=prefindex*x;y<(prefindex*x+x);y++){
									//if(cache[y][1]==1){
										//cache[y][0]=cache[y][0]+1;
									//}
								//}
							//}
						//}
					
				
			//}

		
		//printf("with-prefetch\n");
		//printf("Memory reads: %d\n",reads);
		//printf("Memory writes: %d\n",writes);
		//printf("Cache hits: %d\n",hits);
		//printf("Cache misses: %d\n",misses);
		//fclose(file);
		
		//return 0;
	//}



/*
 * -----------------------------------------------------------------------
 * 
 */
 
 
 
typedef struct {
	int validBit;
	unsigned long int tag;
	unsigned long int timeForLRU;
} cacheLine;

/*
typedef struct cash {
	int reads;
	int writes;
	int hits;
	int misses;
} cash;
*/
	
	
	//cash *cas;
	//cas = (cash*)malloc(
	
	
	
		cacheLine **cache;


cacheLine **mallocCache(int setNumber, int assocNumber) {
	
	cache = (cacheLine**)malloc(setNumber * sizeof(cacheLine*));
	
	int i;
	
	for (i = 0; i < setNumber; i++) {
		cache[i] = (cacheLine*)malloc((assocNumber) * sizeof(cacheLine));
	}
	
	return cache;
}


void zeroValidBits(cacheLine **cache, int setNumber, int assocNumber) {
	int i;
	int j;
	
	for (i = 0; i < setNumber; i++) {
		for (j = 0; j < assocNumber; j++) {
			cache[i][j].validBit = 0;
		}
	}
}


					int reads = 0;
					int writes = 0;
					int hits = 0;
					int misses = 0;
					int count = 0;		//count is to determine least recently used




void zeroOutCache(int setNumber, int assocNumber) {
	int i;
	int j;
	
	for (i = 0; i < setNumber; i++) {
		for (j = 0; j < assocNumber; j++) {
			cache[i][j].tag = 0;
			cache[i][j].validBit = 0;
			cache[i][j].timeForLRU = 0;
		}
	}
	
	reads = 0;
	writes = 0;
	hits = 0;
	misses = 0;
	count = 0;
	
}


int associativity(char *str) {
	
	if (str[0] == 'd') {				//direct
		return 1;
	} else if (str[5] != ':') {			//assoc
		return 2;
	} else {							//assoc:n
		return 3;
	}
}


bool isPowerOfTwo(int x) {
	bool boo = (x != 0) && (x != 1) && ((x & (x - 1)) == 0);
	return boo;
}


void readNoPrefetcher(int assocNumber, unsigned long setIndex, unsigned long tagIndex) {

	int i;
	int j;
	
	int lru = 0;

	for (i = 0; i < assocNumber; i++) {
		
		if (cache[setIndex][i].validBit == 0) {		//cold miss
			misses++;
			reads++;
			
			cache[setIndex][i].validBit = 1;
			cache[setIndex][i].tag = tagIndex;
			
			count++;
			cache[setIndex][i].timeForLRU = count;
			//cache[setIndex][i].timeForLRU++;
			return;
			
		} else {
		
			if (cache[setIndex][i].tag == tagIndex) {	//hit
				hits++;
				
				count++;
				cache[setIndex][i].timeForLRU = count;
				//cache[setIndex][i].timeForLRU++;
				return;
			}
			
			
		if (i == (assocNumber - 1)) {			
			misses++;
			reads++;
			
			for (j = 0; j < assocNumber; j++) {
				  if (cache[setIndex][lru].timeForLRU > cache[setIndex][j].timeForLRU) {			//finds least recently used index
					lru = j;
				}	
			}
			
			cache[setIndex][lru].validBit = 1;
	        cache[setIndex][lru].tag = tagIndex;
	        
	        count++;
	        cache[setIndex][lru].timeForLRU = count;
	        //cache[setIndex][lru].timeForLRU++;
	        }
		}
	}
}

void writeNoPrefetcher(int assocNumber, unsigned long setIndex, unsigned long tagIndex) {

	int i;
	int j;
	
	int lru = 0;

	for (i = 0; i < assocNumber; i++) {
		
		if (cache[setIndex][i].validBit == 0) {				//cold miss
			misses++;
			writes++;
			reads++;
			
			cache[setIndex][i].validBit = 1;
			cache[setIndex][i].tag = tagIndex;
			
			count++;
			cache[setIndex][i].timeForLRU = count;
			//cache[setIndex][i].timeForLRU++;
			return;
	
		} else {											//hit
		
			if (cache[setIndex][i].tag == tagIndex) {
				hits++;
				writes++;
				
				count++;		
				cache[setIndex][i].timeForLRU = count;
				//cache[setIndex][i].timeForLRU++;
				return;
			}
			
			if (i == (assocNumber - 1)) {
				misses++;
				reads++;
				writes++;
				
			for (j = 0; j < assocNumber; j++) {
				if (cache[setIndex][lru].timeForLRU > cache[setIndex][j].timeForLRU) {			//finds least recently used
					lru = j;
				}	
			}
			
			cache[setIndex][lru].validBit = 1;
	        cache[setIndex][lru].tag = tagIndex;
	        
	        count++;
	        cache[setIndex][lru].timeForLRU = count;
	        //cache[setIndex][lru].timeForLRU++;
			}
		}
	}
}

void prefetchForRead(int assocNumber, unsigned long setIndex, unsigned long tagIndex) {
	
	int i;
	int j;
	
	int lru = 0;

	for (i = 0; i < assocNumber; i++) {
		
		if (cache[setIndex][i].validBit == 0) {				//cold miss
			reads++;
			
			cache[setIndex][i].validBit = 1;
			cache[setIndex][i].tag = tagIndex;
			
			count++;
			cache[setIndex][i].timeForLRU = count;
			//cache[setIndex][i].timeForLRU++;
			return;
			
		} else {
		
			if (cache[setIndex][i].tag == tagIndex) {		//hit, no need for prefetch
				return;
			}
			
			if (i == (assocNumber - 1)) {
			
				reads++;
				
			for (j = 0; j < assocNumber; j++) {
				if (cache[setIndex][lru].timeForLRU > cache[setIndex][j].timeForLRU) {			//find least recently used
					lru = j;
				}	
			}
			
			cache[setIndex][lru].validBit = 1;
	        cache[setIndex][lru].tag = tagIndex;
	        
	        count++;   
	        cache[setIndex][lru].timeForLRU = count;
	        //cache[setIndex][lru].timeForLRU++;
			}
		}	
	}
}

void readPrefetcher(int assocNumber, unsigned long setIndex, unsigned long tagIndex, unsigned long prefetcherSetIndex, unsigned long prefetcherTagIndex) {
	
	
	int i;
	int j;
	
	int lru = 0;

	for (i = 0; i < assocNumber; i++) {
		
		if (cache[setIndex][i].validBit == 0) {				//cold miss
			misses++;
			reads++;
			
			cache[setIndex][i].validBit = 1;
			cache[setIndex][i].tag = tagIndex;
			
			count++;
			cache[setIndex][i].timeForLRU = count;
			//cache[setIndex][i].timeForLRU++;
		
			prefetchForRead(assocNumber, prefetcherSetIndex, prefetcherTagIndex);
			return;
			
		} else {

			if (cache[setIndex][i].tag == tagIndex) {		//hit
				hits++;
				
				count++;
				cache[setIndex][i].timeForLRU = count;
				//cache[setIndex][i].timeForLRU++;
				return;
			}
			
			if (i == (assocNumber - 1)) {
				misses++;
				reads++;
							
				for (j = 0; j < assocNumber; j++) {
					if (cache[setIndex][lru].timeForLRU > cache[setIndex][j].timeForLRU) {
						lru = j;
					}	
				}
			
			cache[setIndex][lru].validBit = 1;
	        cache[setIndex][lru].tag = tagIndex;
	        
	        count++;
	        cache[setIndex][lru].timeForLRU = count;
	        //cache[setIndex][lru].timeForLRU++;
	        
	        prefetchForRead(assocNumber, prefetcherSetIndex, prefetcherTagIndex);	        
			}
		}
	}
}

void prefetchForWrite(int assocNumber, unsigned long setIndex, unsigned long tagIndex) {
	
	int i;
	int j;
	
	int lru = 0;

	for (i = 0; i < assocNumber; i++) {
		
		if (cache[setIndex][i].validBit == 0) {   //hasnt been visited before
			reads++;
			
			cache[setIndex][i].validBit = 1;
			cache[setIndex][i].tag = tagIndex;
			
			count++;
			cache[setIndex][i].timeForLRU = count;
			//cache[setIndex][i].timeForLRU++;
			return;
		
		} else {
		
			if (cache[setIndex][i].tag == tagIndex) {		//hit, no need for prefetch
				return;
			}
			
			if (i == (assocNumber - 1)) {
			
				reads++;
						
				for (j = 0; j < assocNumber; j++) {
					if (cache[setIndex][lru].timeForLRU > cache[setIndex][j].timeForLRU) {		//finds least recently used
						lru = j;
					}	
				}
			
				cache[setIndex][lru].validBit = 1;
				cache[setIndex][lru].tag = tagIndex;
				
				count++;
				cache[setIndex][lru].timeForLRU = count;
				//cache[setIndex][lru].timeForLRU++;
			}	
		}
	}
}

void writePrefetcher(int assocNumber, unsigned long setIndex, unsigned long tagIndex, unsigned long prefetcherSetIndex, unsigned long prefetcherTagIndex) {
	
	int i;
	int j;
	
	int lru = 0;

	for (i = 0; i < assocNumber; i++) {
		
		if (cache[setIndex][i].validBit == 0) {			//cold miss
			misses++;
			reads++;
			writes++;
		
			cache[setIndex][i].validBit = 1;
			cache[setIndex][i].tag = tagIndex;
			
			count++;
			cache[setIndex][i].timeForLRU = count;
			//cache[setIndex][i].timeForLRU++;
			
			prefetchForWrite(assocNumber, prefetcherSetIndex, prefetcherTagIndex);
			return;
		
		} else {
		
			if (cache[setIndex][i].tag == tagIndex) {		//hit
				hits++;
				writes++;
				
				count++;
				cache[setIndex][i].timeForLRU = count;
				//cache[setIndex][i].timeForLRU++;
				return;
			}
			
			if (i == (assocNumber - 1)) {
				misses++;
				reads++;
				writes++;
				
				for (j = 0; j < assocNumber; j++) {
					if (cache[setIndex][lru].timeForLRU > cache[setIndex][j].timeForLRU) {		//finds least recently used
						lru = j;
					}	
				}
			
				cache[setIndex][lru].validBit = 1;
				cache[setIndex][lru].tag = tagIndex;
				
				count++;
				cache[setIndex][lru].timeForLRU = count;
				//cache[setIndex][lru].timeForLRU++;
				
				prefetchForWrite(assocNumber, prefetcherSetIndex, prefetcherTagIndex);
			}
		}
	}
}

void freeCache(cacheLine **cache, unsigned long setNumber) {
	int i;
	
	for (i = 0; i < setNumber; i++) {
		free(cache[i]);
	}
	free(cache);
}


int main(int argc, char **argv) {
	
	if (argc != 6) {
		printf("error\n");
		return 0;
	}
	
	
	FILE *fptr;
	fptr = fopen(argv[5], "r");
	
	if (fptr == NULL) {
		printf("error\n");
		return 0;
	}
	
	int cacheSize = atoi(argv[1]);
	char *assoc = argv[2];
	int blockSize = atoi(argv[4]);
	
	if (!isPowerOfTwo(cacheSize) || !isPowerOfTwo(blockSize)) {
		printf("error\n");
		return 0;
	}
	
	int n;				//set assoc;
	int assocNumber;
	int setNumber;
		
	int check = associativity(assoc);
	
	if (check == 1) {				//direct
		assocNumber = 1;
		setNumber = cacheSize / blockSize;
	} else if (check == 2) {		//fully assoc
		assocNumber = cacheSize / blockSize;
		setNumber = 1;
	} else {						//n way assoc
		sscanf(argv[2], "assoc:%d", &n);
		assocNumber = n;
		setNumber = cacheSize / blockSize;
		setNumber = setNumber / n;
	}

	int block = log(blockSize) / log(2);
	int set = log(setNumber) / log(2);

	unsigned long bitMask = ((1 << set) - 1);
	
	cache = mallocCache(setNumber, assocNumber);
	zeroValidBits(cache, setNumber, assocNumber);
	
	char op;
	unsigned long address;
	
	unsigned long tagIndex;
	unsigned long setIndex;

	

		//no prefetcher

/*
 * while (!feof(fptr)) {
		fscanf(fptr, "%s", tempStr);
		if (strcmp(tempStr, "#eof") != 0) {
		fscanf(fptr, "%c %lx\n", &op, &address);
		*/

	while (fscanf(fptr, "%*x: %c %lx", &op, &address) == 2) {
		
		//if (strcmp(op, 'R') != 0 || strcmp(op, 'W') != 0) {
		/*if (op != 'R' || op != 'W') {
			printf("error\n");
			return 0;
		}*/
		
		setIndex = (address >> block) & bitMask;
		tagIndex = address >> (block + set);
		
		if (op == 'R') {
			readNoPrefetcher(assocNumber, setIndex, tagIndex);
			
		} else { 
			writeNoPrefetcher(assocNumber, setIndex, tagIndex);
		}
	}
	
	printf("no-prefetch\n");
	printf("Memory reads: %d\n", reads);
	printf("Memory writes: %d\n", writes);
	printf("Cache hits: %d\n", hits);
	printf("Cache misses: %d\n", misses);
	
	fclose(fptr);
	
	
	
	fptr = fopen(argv[5], "r");
	
	zeroOutCache(setNumber, assocNumber);
/* ---------------------------- prefetcher -------------------------------------*/

	unsigned long prefetchAddress;
	
	unsigned long prefetcherTagIndex;
	unsigned long prefetcherSetIndex;

	while (fscanf(fptr, "%*x: %c %lx", &op, &address) == 2) {
		
		setIndex = (address >> block) & bitMask;
		tagIndex = address >> (block + set);
		
		prefetchAddress = address + blockSize;
		
		prefetcherSetIndex = (prefetchAddress >> block) & bitMask;
		prefetcherTagIndex = prefetchAddress >> (block + set);


		if (op == 'R') {
			readPrefetcher(assocNumber, setIndex, tagIndex, prefetcherSetIndex, prefetcherTagIndex);
			
		} else {
			writePrefetcher(assocNumber, setIndex, tagIndex, prefetcherSetIndex, prefetcherTagIndex);
		}

	}

	printf("with-prefetch\n");
	printf("Memory reads: %d\n", reads);
	printf("Memory writes: %d\n", writes);
	printf("Cache hits: %d\n", hits);
	printf("Cache misses: %d\n", misses);
		
	fclose(fptr);
	freeCache(cache, setNumber);
		
	return 0;
}










/* -------------------------------------------------------------------------------------------------*/


//~ /*
//~ typedef struct {
	//~ int validBit;
	//~ char *tag;
//~ } cashLine;
//~ */
//~ /*
//~ typedef struct {
	//~ cashLine **line;
//~ } cacheSet;
//~ */
//~ //typedef unsigned long long int memAddress;
//~ /*
//~ typedef struct {
	//~ int cacheSize;
	//~ int blockSize;
	//~ int numReads;
	//~ int numWrites;
	//~ int numHits;
	//~ int numMisses;
	//~ char *associativity;
	//~ int aValue;
	//~ char *cachePolicy;
	//~ int numSets;
	//~ cacheSet **set;
	//~ int setSize;		
//~ } cache;
//~ */



//~ int Twos(int x) {
	
	//~ if (x == 0) {
		//~ return 0;
	//~ }
	//~ while (x != 1) {
		//~ if ((x % 2) != 0) {
			//~ return 0;
		//~ } else {
			//~ x = x / 2;
		//~ }
	//~ }
	//~ return 1;
//~ }

//~ /*
//~ bool isPowerOfTwo(int num) {
	//~ bool boo = (num != 0) && (num != 1) && ((num & (num - 1)) == 0);
	//~ return boo;
//~ }
//~ */


//~ /*
 //~ * 
//~ cache *cash = NULL;

//~ void zeroOutCache() {
	//~ cash->cacheSize = 0;
	//~ cash->blockSize = 0;
	//~ cash->numReads = 0;
	//~ cash->numWrites = 0;
	//~ cash->numHits = 0;
	//~ cash->numMisses = 0;
	//~ cash->associativity = NULL;
	//~ cash->aValue = 0;
	//~ cash->cachePolicy = NULL;
	//~ cash->numSets = 0;
//~ }
//~ */

//~ /*
//~ void zeroOutAddy(address *mem) {
	//~ mem->numTag = 0;
	//~ mem->numSI = 0;
	//~ mem->numBO = 0;
	//~ mem->setDec = 0;
	//~ mem->setIndex = NULL;
	//~ mem->tag = NULL;
	//~ mem->rw = NULL;
//~ }
//~ */

//~ /*
//~ void buildCache(cache *cash) {

	//~ int i;
	//~ int j;
	//~ int ns = cash->numSets;
	//~ cash->set = malloc(ns * sizeof(cacheSet*));
	
	//~ for (i = 0; i < ns; i++) {
		//~ cash->set[i] = malloc(sizeof(cacheSet*));
		//~ cash->set[i]->line = malloc(cash->setSize * sizeof(cashLine));
		//~ for (j = 0; j < cash->setSize; j++) {
			//~ cash->set[i]->line[j] = malloc(sizeof(cashLine));
			//~ cash->set[i]->line[j]->validBit = 0;
			//~ cash->set[i]->line[j]->tag = (char*)malloc(sizeof(char) * 33);
		//~ }
	//~ }
//~ }
//~ */

//~ /*
//~ char *hexToBinary(char *ad) {
	//~ int i = 2;
	//~ char *a = malloc(sizeof(char) * 33);
	//~ while (ad[i]) {
		//~ switch(ad[i]) {
			//~ case '0' : strcat(a, "0000");
						//~ break;
			//~ case '1' : strcat(a, "0001");
						//~ break;
			//~ case '2' : strcat(a, "0010");
						//~ break;
			//~ case '3' : strcat(a, "0011");
						//~ break;
			//~ case '4' : strcat(a, "0100");
						//~ break;
			//~ case '5' : strcat(a, "0101");
						//~ break;
			//~ case '6' : strcat(a, "0110");
						//~ break;
			//~ case '7' : strcat(a, "0111");
						//~ break;
			//~ case '8' : strcat(a, "1000");
						//~ break;
			//~ case '9' : strcat(a, "1001");
						//~ break;
			//~ case 'a' : strcat(a, "1010");
						//~ break;
			//~ case 'b' : strcat(a, "1011");
						//~ break;
			//~ case 'c' : strcat(a, "1100");
						//~ break;
			//~ case 'd' : strcat(a, "1101");
						//~ break;
			//~ case 'e' : strcat(a, "1110");
						//~ break;
			//~ case 'f' : strcat(a, "1111");
						//~ break;
		//~ }
	//~ }
		//~ strcat(a, "\0");
		//~ return a;
		//~ i++;
//~ }
//~ */

//~ /*
//~ int binaryToDecimal(char *b) {
	//~ int i;
	//~ int result = 0;
	//~ int power = 0;
	
	//~ for (i = strlen(b) - 1; i >= 0; i--) {
		//~ int added = (b[i] - '0') * (int)pow(2, power);
		//~ result += added;
		//~ power++;
	//~ }
	//~ return result;
//~ }
//~ */

//~ /*
//~ void upAddy(address *mem, int ml, char *add) {
	//~ mem->numBO = (int)(log((double)cash->blockSize) / log(2.0));
	//~ mem->numSI = (int)(log((double)cash->numSets) / log(2.0));
	//~ mem->numTag = ml - (mem->numSI) - (mem->numBO);
	//~ mem->setIndex = malloc(mem->numSI * sizeof(char) + 1);
	//~ mem->tag = malloc(mem->numTag * sizeof(char) + 1);
	//~ int i;
	//~ for (i = 0; i < mem->numTag; i++) {
		//~ int l = strlen(mem->tag);
		//~ mem->tag[l] = add[i];
		//~ mem->tag[l + 1] = '\0';
	//~ }
	//~ i = 0;
	//~ while (i < (mem->numSI + mem->numTag)) {
		//~ int l = strlen(mem->setIndex);
		//~ mem->setIndex[l] = add[i];
		//~ mem->setIndex[l + 1] = '\0';
	//~ }
	//~ mem->setDec = binaryToDecimal(mem->setIndex);
//~ }
//~ */

//~ /*
//~ void printUsage(char *argv[]) {
	
//~ }
//~ */



