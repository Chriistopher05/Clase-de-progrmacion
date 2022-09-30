# Clase-de-progrmacion
 int a[100];

 

int i;

 

int change;

 

int n;

 

int buf;

 

time_t seed;

 


int main(int argc, char* argv[])
{
  seed = 0;
  srand(time(&seed));

 

  //n = sizeof(a) / sizeof(*a);
  n = 100;
  for (i = 0; i <= n-1; i++)
  {
    a[i] = rand() % 1000;
  }

 

    printf("\nElement desordenados\n");
  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]);
  }

 

  change = 1;
  while (change == 1)
  {
    change = 0;
    for (i = 0; i <= n-2; i++)
    {
      if (a[i] > a[i+1])
      {
        buf = a[i];
        a[i] = a[i+1];
        a[i+1] = buf;
        change = 1;
      }
    }
  }
  printf("\nElement ordenados\n");
  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]);
  }
  return 0;
  in main
  Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ int a [100];
bash: int: command not found

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ int i;
bash: int: command not found

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ int changue
bash: int: command not found

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ int n;
bash: int: command not found

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ int buf;
bash: int: command not found

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ time_t seed;
bash: time_t: command not found

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ int main (int argc char* argv[])
bash: syntax error near unexpected token `('

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ //=sizeo(a) / sizeof(*a); n= 100; for+ (i=0;i<=n-1; i++) {a[i]= rand0% 1000;}
bash: syntax error near unexpected token `a'

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ printf (/nElement desordenados/n");
bash: syntax error near unexpected token `/nElement'

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ printf("\nElement desordenados\n");
bash: syntax error near unexpected token `"\nElement desordenados\n"'

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ git init
Reinitialized existing Git repository in C:/Users/Usuario/.git/

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ git add .m
fatal: pathspec '.m' did not match any files

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ git status
warning: could not open directory 'Application Data/': Permission denied
warning: could not open directory 'Cookies/': Permission denied
warning: could not open directory 'Local Settings/': Permission denied
warning: could not open directory 'My Documents/': Permission denied
warning: could not open directory 'NetHood/': Permission denied
warning: could not open directory 'PrintHood/': Permission denied
warning: could not open directory 'Recent/': Permission denied
warning: could not open directory 'SendTo/': Permission denied
warning: could not open directory 'Start Menu/': Permission denied
warning: could not open directory 'Templates/': Permission denied
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        .Ld2VirtualBox/
        .bash_history
        .gitconfig
        3D Objects/
        AppData/
        Contacts/
        Desktop/
        Documents/
        Downloads/
        Favorites/
        IntelGraphicsProfiles/
        Links/
        Music/
        NTUSER.DAT
        NTUSER.DAT{051d5f79-93cd-11ec-a549-f2c85716e37f}.TM.blf
        NTUSER.DAT{051d5f79-93cd-11ec-a549-f2c85716e37f}.TMContainer00000000000000000001.regtrans-ms
        NTUSER.DAT{051d5f79-93cd-11ec-a549-f2c85716e37f}.TMContainer00000000000000000002.regtrans-ms
        OneDrive/
        Pictures/
        Saved Games/
        Searches/
        Videos/
        mintty.exe.stackdump
        ntuser.dat.LOG1
        ntuser.dat.LOG2
        ntuser.ini

nothing added to commit but untracked files present (use "git add" to track)

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ git commit
warning: could not open directory 'Application Data/': Permission denied
warning: could not open directory 'Cookies/': Permission denied
warning: could not open directory 'Local Settings/': Permission denied
warning: could not open directory 'My Documents/': Permission denied
warning: could not open directory 'NetHood/': Permission denied
warning: could not open directory 'PrintHood/': Permission denied
warning: could not open directory 'Recent/': Permission denied
warning: could not open directory 'SendTo/': Permission denied
warning: could not open directory 'Start Menu/': Permission denied
warning: could not open directory 'Templates/': Permission denied
warning: could not open directory 'Application Data/': Permission denied
warning: could not open directory 'Cookies/': Permission denied
warning: could not open directory 'Local Settings/': Permission denied
warning: could not open directory 'My Documents/': Permission denied
warning: could not open directory 'NetHood/': Permission denied
warning: could not open directory 'PrintHood/': Permission denied
warning: could not open directory 'Recent/': Permission denied
warning: could not open directory 'SendTo/': Permission denied
warning: could not open directory 'Start Menu/': Permission denied
warning: could not open directory 'Templates/': Permission denied
On branch main

Initial commit

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        .Ld2VirtualBox/
        .bash_history
        .gitconfig
        3D Objects/
        AppData/
        Contacts/
        Desktop/
        Documents/
        Downloads/
        Favorites/
        IntelGraphicsProfiles/
        Links/
        Music/
        NTUSER.DAT
        NTUSER.DAT{051d5f79-93cd-11ec-a549-f2c85716e37f}.TM.blf
        NTUSER.DAT{051d5f79-93cd-11ec-a549-f2c85716e37f}.TMContainer00000000000000000001.regtrans-ms
        NTUSER.DAT{051d5f79-93cd-11ec-a549-f2c85716e37f}.TMContainer00000000000000000002.regtrans-ms
        OneDrive/
        Pictures/
        Saved Games/
        Searches/
        Videos/
        mintty.exe.stackdump
        ntuser.dat.LOG1
        ntuser.dat.LOG2
        ntuser.ini

nothing added to commit but untracked files present (use "git add" to track)

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ git name
git: 'name' is not a git command. See 'git --help'.

The most similar command is
        blame

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ git add "agregar proyecto"
fatal: pathspec 'agregar proyecto' did not match any files

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$ git remote add origin https://github.com/Chriistopher05/programacion--work.git
error: remote origin already exists.

Usuario@LAPTOP-MEP714B7 MINGW64 ~ (main)
$

  
  

