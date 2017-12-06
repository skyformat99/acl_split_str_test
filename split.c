#include "lib_acl.h"


void usage(){
	printf("input like this :"
	       "-s / -g"  );
}

int main(int argc,char *const *argv){

 int i;
 int ch;
 
 char buf[1024];
 buf[0]=0;
 
 while((ch=getopt(argc,argv,"split:h"))>0){
	 
	 switch(ch){
		 case 's' :{
			  snprintf(buf,sizeof(buf),"%s",acl_optarg);
			  break;
		 }
		 case 'h' :{
			 usage();
			 break;
		 }
		 default:{
			 usage();
			 break;
		 }
	 }
}

ACL_ARGV *argv_temp=acl_argv_split("jackwu xxx fjsdafas fsadfs"," ");
ACL_ITER iter;

  acl_foreach(iter,argv_temp){
	   
	   const char *ptr=(const char *)iter.data;
	   printf("data=%s\n",ptr);
  }
	
	 
	
return 0;
	
}
