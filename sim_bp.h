#ifndef SIM_BP_H
#define SIM_BP_H
#define Max_size (1 << 21)

typedef struct bp_params{
    unsigned long int K;
    unsigned long int M1;
    unsigned long int M2;
    unsigned long int N;
    char*             bp_name;
}bp_params;
    
// Put additional data structures here as per your requirement

typedef struct bimodal{

    unsigned char bimodal_table[Max_size];
    unsigned int b_size;

}bimodal;

typedef struct og_share{            // For REAL OGs like Me and tupac

    unsigned char ogshare_table[Max_size];
    unsigned int og_size;
    unsigned int n;
    unsigned int history;

}og_share;

#endif
