void renominarTE(){
	int ret;
   char oldname[] = "config.txt";
   char newname[] = "config.te";
   ret = rename(oldname, newname);

}

void renominarTXT(){
	int ret;
   char oldname[] = "config.te";
   char newname[] = "config.txt";
   ret = rename(oldname, newname);

}
