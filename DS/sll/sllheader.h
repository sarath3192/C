typedef struct st
{
 char name[20];
 int roll;
 float marks;
 struct st *pt;
 }S;
void revlink(S **);
void scanfile(S **);
void savefile(S *);
void savefilerec(S *);
void addnode(S **);
void addend(S **);
void addbegin(S **);
void print(S *);
void printrec(S *);
void revprint(S *);
void revprintrec(S *);
int nodecount(S *);
