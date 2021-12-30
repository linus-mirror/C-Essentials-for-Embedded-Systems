int main()
{
	enum Students_Names
	{
		Sunil = 1, Kunal = 2, Chaatru = 3, Yashwanth = 4, Sourish = 5
	};

	enum Students_Names Student_Name1, Student_Name2;
	typedef enum Students_Names _NAME;

	_NAME s3,s4,s5;

	Student_Name1 = Sunil;
	Student_Name2 = Kunal;
	s3 = Chaatru;
	s4 = Yashwanth;
	s5 = Sourish;

	printf(" Sunil's Roll No. = %d",Student_Name1);
	printf("\n Kunal's Roll No. = %d",Student_Name2);
	printf("\n Chaatru's Roll No. = %d",s3);
	printf("\n Yashwanth's Roll No. = %d",s4);
	printf("\n Sourish's Roll No. = %d",s5);

	printf("\n\n Size of enum = %d Bytes",sizeof(Yashwanth));

}
