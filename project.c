#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct name
{
	char name[20];
	char background;
	char rev[300];
};

int askQuestion(); 
void determineCareerPath(); 
void medical();
void engineering();
void comp();
void civil();
void mechnical();
void electrical();
void chemical();
void aerospace();
void software();
void mbbs();
void bds();
void dpt();
void phr();
void AI();
void cys();
void cs();
void university();

int main(){
	
	
    int totalMedical = 0, totalEngineering = 0 ,totalcomputer=0;
    
	char questions[16][100] = {
		
    "career counselling",
    
    "Do you like solving complex mathematical problems?",
    
	"Are you comfortable dealing with patients?",
	
	"Do you enjoy working with hardware",
	
	"Do you enjoy studying human anatomy?",
    
	"Are you interested in developing new technologies?",
    
    "Are you interested in understanding the fundamentals of how computers work?",
    
    "Do you enjoy working with chemicals and experiments?",
    
    "Are you interested in healthcare management?",
    
	"Do you find the concept of problem-solving in a digital environment appealing?",
	
	"Do you have a strong interest in biology?",
	
	"Are you fascinated by how machines work?",
    
	"Do you enjoy programming and software development?",
    
	"Are you curious about how buildings and structures are constructed?",
    
	"Do you enjoy learning about diseases and their treatments?",
    
    "Are you curious about the impact of technology on society and daily life?",
    
	};
    
	struct name data;
    
	printf("    \t\t\t\t\t\t\tWELCOME\n  \t\t\t\t\t\t\t  To\n    \t\t\t\t\t\tCAREER COUNSELLING PROGRAM\n");
	
	printf("\n\nPlease Enter Your Name : ",data.name);
    gets(data.name);
    printf("We would like to know your backgraound : ");
    printf("\nif your background is; \n#pre-engineering or your subjects are PMC(phy,math,chem) enter E");
    printf("\n#pre-medical or subjects are PBC(phy,bio,chem) enter M");
    printf("\n#ICS or your main subject is computer enter C");
    printf("\n#If the options here are not your backgrounds enter any alphabat");
    printf("\n=>Enter here: ");
    scanf(" %c",&data.background);
    if(data.background=='E')
    {
    	totalEngineering+=1;
	}
	else if(data.background=='M')
	{
		totalMedical+=1;
	}
	else if(data.background=='C')
	{
		totalcomputer+=1;
	}
    else;
    
	
	printf("We will be pleased to present a series of questions for your consideration : \n");
	printf("guidline:\n you have to choose rank 1-5 depending on what you feel;\n");
	
	printf("\nlets start;\n");
	int i;
    for ( i = 1; i <= 15; ++i) {
        int response = askQuestion(questions[i]);
        if (i % 3 == 0) {
            totalcomputer += response;
        }
		else if(i%2 ==0)
		{
			totalMedical += response;
		}
		 else {
            totalEngineering += response;
        }
    }
    
    determineCareerPath(totalMedical, totalEngineering ,totalcomputer);
    char rev[300];
    printf("\n\nPLease enter the review about this program:\n");
    scanf("%s",&rev);
	printf("\n----------THANK YOU for your review %s-------------",strupr(data.name));

    return 0;
}
int askQuestion(const char* question) {
    int response;
	int j;
    printf("\n%s \n(Enter 1-5, 1: strongly disagree, 5: strongly agree): ",question);
    scanf("%d",&response);
    if(response <= 5 && response >0)
    {
    	return response;
	}
    else
    {
    	do
		{
			printf("response must be between 1 to 5 ");
			printf("\n%s \n(Enter 1-5, 1: strongly disagree, 5: strongly agree): ",question);
            scanf("%d",&response);
            if(response <= 5 && response > 0)
            {
    	       return response;
	        }
            
		}while(response>5||response<1);
    	
	}

}
void determineCareerPath(int totalMedical, int totalEngineering ,int totalcomputer)
{
    if (totalMedical >= totalEngineering && totalMedical >= totalcomputer)
	{
        printf("\n\nBased on your answers, you might be inclined towards a medical career.\n");
        medical();
        
    }
	else if(totalcomputer >= totalEngineering && totalcomputer >= totalMedical)
	{
        printf("\n\nBased on your answers, you might be inclined towards an computer career.\n");
		comp();	
	}
	else
	{
        printf("\n\nBased on your answers, you might be inclined towards an engineering career.\n\n");
        engineering(); 
    }
}
void engineering()
{
	char question[12][200]=
	{
		"Are you interested in designing and constructing infrastructure like bridges, roads, or buildings?",
         
        "Have you thought about the environmental impact of construction projects?",
        
        "Are you fascinated by machines, engines, and how things move?",
        
        "Do you enjoy working with materials and designing mechanical systems?",
        
        "Are you interested in working with electronics, circuits, and electrical systems?",
        
        "Do you enjoy problem-solving related to power generation, transmission, and distribution?",
        
        "Are you interested in processes involving the transformation of raw materials into valuable products?",
		
		"Do you enjoy studying reactions and optimizing processes for efficiency and sustainability?",
		
		"Are you fascinated by aircraft, spacecraft, and the principles of flight?",
		
		"Have you thought about the challenges and innovations in the aerospace industry?",
		
		"Are you passionate about coding and creating software applications?",
		
		"Do you enjoy problem-solving and logical thinking?",
		
	};
	
	char response[6][2];
	char answer[12];
	int i,j,k,n;
	
	for(i=0; i<12; i++)
	{
		printf("\n%s",question[i]);
		printf("\nEnter Y/y for Yes N/n for No : ");
		scanf(" %c",&answer[i]);
		fflush(stdin);
		if(answer[i]=='y'||answer[i]=='Y'||answer[i]=='n'||answer[i]=='N')
		{	}	
		else
		{
			do
			{
				printf("\nPlease input the right domain (y/Y or n/N)");
				printf("\n%s",question[i]);
				printf("\nEnter Y/y for Yes N/n for No : ");
				scanf(" %c",&answer[i]);
				fflush(stdin);
				if(answer[i]=='y'||answer[i]=='Y'||answer[i]=='n'||answer[i]=='N')
				{
					n=0;
					break;
				}
				else n=1;
			}
			while(n=1);
		}	
			
	}
			int index;
			printf("---------------YOUR ROADMAP-----------------");
			printf("You incline towards:");
			for(i=0;i<6;i++){
				for(j=0;j<2;j++){
				 index = i*2+j;
					response[i][j]=answer[index];
				}
			}
			int a;
			for(i=0;i<6;i++)
			{
				if(response[i][0] == 'y' || response[i][1] == 'y' || response[i][0] == 'N' || response[i][1] == 'n'){
					a=i;
					switch (a) { 
						case 0:
							civil();
							break;
						case 1:
							mechnical();
							break;
						case 2:
							electrical();
							break;
						case 3:
							chemical();
							break;
						case 4:
							aerospace();
							break;
						case 5:
							software();
							break;					
						
					}	
				}
			}
				university(1);
			}
			
void medical()
{
	char questions[8][200]=
	{
		"Do you have a strong interest in studying and understanding the human body and its functions?",
		"Do you find joy in scientific subjects like biology and chemistry, especially when applied to medical contexts?",
		"Do you enjoy working with precision and attention to detail, particularly in the context of dental procedures?",
		"Are you interested in preventive dentistry, educating patients on oral hygiene, and promoting dental health?",
		"Are you interested in helping individuals recover from injuries, surgeries, or physical impairments?",
		"Are you comfortable with the physical demands of assisting patients with exercises and therapeutic activities?",
		"Are you interested in the pharmaceutical industry, including drug development, research, and regulatory aspects?",
		"Do you see yourself playing a crucial role in promoting safe and effective medication use within a healthcare team?",

	};
	char response[4][2];
	char answer[8];
	int i,j,k,n;
	for(i=0; i<8; i++)
	{
		printf("\n%s",questions[i]);
		printf("\nEnter Y/y for Yes N/n for No : ");
		scanf(" %c",&answer[i]);
		fflush(stdin);
		if(answer[i]=='y'||answer[i]=='Y'||answer[i]=='n'||answer[i]=='N')
		{	}	
		else
		{
			do
			{
				printf("\nPlease input the right domain (y/Y or n/N)");
				printf("\n%s",questions[i]);
				printf("\nEnter Y/y for Yes N/n for No : ");
				scanf(" %c",&answer[i]);
				fflush(stdin);
				if(answer[i]=='y'||answer[i]=='Y'||answer[i]=='n'||answer[i]=='N')
				{
					n=0;
					break;
				}
				else n=1;
			}
			while(n=1);
		}			
	}
			int index;
			for(i=0;i<4;i++){
				for(j=0;j<2;j++){
				 index = i*2+j;
					response[i][j]=answer[index];
				}
			}
			int a;
			printf("---------------YOUR ROADMAP-----------------");
			printf("\nYou incline towards:");
			for(i=0;i<4;i++)
			{
				if(response[i][0] == 'y' || response[i][1] == 'y' || response[i][0] == 'N' || response[i][1] == 'n'){
					a=i;
					switch (a)
					{ 
						case 0:
							mbbs();
							break;
						case 1:
							bds();
							break;
						case 2:
							dpt();
							break;
						case 3:
							phr();
							break;				
						
					}	
				}
			}
			university(2);
}
void comp()
{
	char questions[6][300]=
	{
		"Are you excited about exploring how machines learn and make decisions on their own through AI?",
		"Have you come across any applications of artificial intelligence in your daily life,and if so,did they spark your interest in  the  field?",
		"Have you ever been curious about protecting information online and keeping it safe from hackers or unauthorized access?",
		"Do you like solving puzzles, paying close attention to details, and learning how to keep computers safe from bad things online?",
		"Can you see yourself expressing creativity through coding and software development?",
		"Have you ever found yourself curious about how the technology you use every day works?",
	};
	char response[3][2];
	char answer[6];
	int i,j,k,n;
	for(i=0; i<6; i++)
	{
		printf("\n%s",questions[i]);
		printf("\nEnter Y/y for Yes N/n for No : ");
		scanf(" %c",&answer[i]);
		fflush(stdin);
		if(answer[i]=='y'||answer[i]=='Y'||answer[i]=='n'||answer[i]=='N')
		{	}	
		else
		{
			do
			{
				printf("\nPlease input the right domain (y/Y or n/N)");
				printf("\n%s",questions[i]);
				printf("\nEnter Y/y for Yes N/n for No : ");
				scanf(" %c",&answer[i]);
				fflush(stdin);
				if(answer[i]=='y'||answer[i]=='Y'||answer[i]=='n'||answer[i]=='N')
				{
					n=0;
					break;
				}
				else n=1;
			}
			while(n=1);
		}			
	}
			int index;
			for(i=0;i<3;i++){
				for(j=0;j<2;j++){
				 index = i*2+j;
					response[i][j]=answer[index];
				}
			}
			int a;
		    printf("---------------YOUR ROADMAP-----------------");
		    printf("\nYou incline towards:");
			for(i=0;i<3;i++)
			{
				if(response[i][0] == 'y' || response[i][1] == 'y' ||response[i][0] == 'Y' || response[i][1] == 'Y' ){
					a=i;
					switch (a)
					{ 
						case 0:
						    AI();
							break;
						case 1:
						    cys();
							break;
						case 2:
						    cs();
							break;					
					}		
				}
			}
			university(3);
}	
void civil()
{   
    printf("Civil engineering\n");
    printf("High School Preparation:\n");
    printf("- Mathematics and Sciences: Master mathematics including algebra, trigonometry, and calculus. Focus on physics to understand principles of forces and motion.\n");
    printf("- Technical Skills: Begin familiarizing yourself with basic engineering principles, construction concepts, and basic computer-aided design (CAD) software.\n\n");

    printf("College Preparation:\n");
    printf("- College Research: Explore universities with reputable civil engineering programs. Consider factors like program accreditation, faculty expertise, and available resources.\n");
    printf("- Admission Prerequisites: Understand the admission criteria and work towards meeting them. Focus on maintaining a strong GPA in relevant subjects.\n\n");

    printf("First Years in College:\n");
    printf("- Foundational Courses: Take introductory courses in mathematics, physics, and engineering fundamentals.\n");
    printf("- Exploration Phase: Explore various disciplines within civil engineering, such as structural, transportation, geotechnical, and environmental engineering.\n\n");

    printf("Specialization and Projects:\n");
    printf("- Select Focus Area: Choose a specialized field of interest within civil engineering.\n");
    printf("- Internships and Projects: Engage in internships, research projects, or participate in engineering clubs to gain hands-on experience.\n\n");

    printf("Advanced Learning:\n");
    printf("- Advanced Studies: Progress to advanced courses specific to the chosen field of civil engineering.\n");
    printf("- Practical Experience: Seek practical experiences through internships, co-ops, or research opportunities.\n\n");

    printf("Professional Development:\n");
    printf("- Networking: Connect with professionals, faculty, and peers in the field. Attend career fairs, conferences, and join professional organizations.\n");
    printf("- Soft Skills Enhancement: Work on communication, teamwork, problem-solving, and leadership skills.\n\n");

    printf("Continuous Growth:\n");
    printf("- Stay Updated: Keep abreast of emerging technologies, trends, and industry developments in civil engineering.\n");
    printf("- Further Education: Consider pursuing higher degrees (master's or Ph.D.) for specialized roles, research, or academic pursuits.\n\n");

    printf("Lifelong Skills:\n");
    printf("- Critical Thinking: Foster critical thinking skills essential for solving complex engineering problems.\n");
    printf("- Creativity and Innovation: Cultivate a creative mindset to innovate and design sustainable solutions.\n");
	
}
void mechnical()
{
	printf("Mechanical engineering\n");
	printf("High School Preparation:\n");
    printf("- Mathematics and Sciences: Master algebra, trigonometry, and physics fundamentals.\n");
    printf("- Basic Engineering Exposure: Explore basic engineering principles through clubs or introductory courses.\n\n");

    printf("College Preparation:\n");
    printf("- Research Universities: Find colleges offering reputable mechanical engineering programs. Understand their admission criteria and prerequisites.\n\n");

    printf("Specialization and Projects:\n");
    printf("- Choose a Focus Area: Decide on a specific area within mechanical engineering that interests you, like robotics, automotive, or aerospace.\n");
    printf("- Hands-on Experience: Engage in projects, internships, or clubs related to your chosen field for practical experience.\n\n");

    printf("Advanced Learning:\n");
    printf("- Advanced Studies: Move on to more advanced courses specific to your chosen field of mechanical engineering.\n");
    printf("- Real-world Applications: Apply theoretical knowledge to real-world problems through projects or internships.\n\n");

    printf("Professional Development:\n");
    printf("- Networking: Connect with professionals, attend career fairs, and join engineering societies or clubs.\n");
    printf("- Soft Skills Enhancement: Work on communication, teamwork, problem-solving, and leadership skills.\n\n");

    printf("Continuous Growth:\n");
    printf("- Stay Updated: Keep up with the latest technologies, trends, and developments in mechanical engineering.\n");
    printf("- Further Education: Consider advanced degrees (master's or Ph.D.) for specialized roles or research opportunities.\n\n");

    printf("Lifelong Skills:\n");
    printf("- Critical Thinking: Foster problem-solving and critical thinking skills crucial for solving engineering challenges.\n");
    printf("- Creativity: Develop a creative approach to innovate and design solutions in mechanical engineering.\n");
}   
void electrical()
{
	printf("Electrical engineering:\n\n");
    printf("High School:\n");
    printf("Focus on math and physics.\n");
    printf("Consider advanced placement (AP) courses.\n\n");
    printf("Bachelor's Degree:\n");
    printf("Study electrical engineering.\n");
    printf("Learn basics like circuit analysis and electronics.\n\n");
    printf("Gain Practical Skills:\n");
    printf("Get internships for hands-on experience.\n");
    printf("Work on personal projects.\n\n");
    printf("Find Your Interest:\n");
    printf("Explore areas like power systems or telecommunications.\n");
    printf("Take advanced courses in your chosen area.\n\n");
    printf("Job Readiness:\n");
    printf("Look for entry-level positions.\n");
    printf("Build a strong resume with practical skills.\n\n");
    printf("Networking:\n");
    printf("Attend industry events.\n");
    printf("Join online communities.\n\n");
    printf("Keep Learning:\n");
    printf("Stay updated with certifications.\n");
    printf("Explore continuing education options.\n\n");
    printf("Career Growth:\n");
    printf("Aim for advanced roles or leadership positions.\n");
    printf("Consider project management.\n\n");
    printf("Lifelong Learning:\n");
    printf("Stay informed about industry trends.\n");
    printf("Keep enhancing your skills.\n\n");
    printf("This roadmap should guide students pursuing electrical engineering.\n");
}
void chemical()
{
	printf("Chemical engineering:\n\n");
	printf("Education:\n");
    printf("Get a Bachelor's degree in Chemical Engineering or a related field.\n\n");
    printf("Internships:\n");
    printf("Gain practical experience through internships during your studies.\n\n");
    printf("Specialize:\n");
    printf("Explore areas like process engineering, environmental engineering, or materials engineering.\n\n");
    printf("Job Entry:\n");
    printf("Start your career with entry-level positions in areas like process engineering or research.\n\n");
    printf("Learn and Network:\n");
    printf("Stay informed about industry trends, attend workshops, and build a professional network.\n\n");
    printf("Consider Advanced Studies (Optional):\n");
    printf("Think about pursuing a Master's or Ph.D. if you're interested in advanced research.\n\n");
    printf("Certifications (Optional):\n");
    printf("Consider professional certifications, such as becoming a licensed Professional Engineer.\n\n");
    printf("Career Growth:\n");
    printf("Advance in your career by taking on more responsibilities and leadership roles.\n\n");
    printf("Stay Current:\n");
    printf("Continue learning and adapting to changes in the field throughout your career.\n\n");
    printf("Explore Specializations:\n");
    printf("Explore different areas within chemical engineering and find what you're passionate about.\n\n");
    printf("Mentorship:\n");
    printf("Consider mentorship opportunities to learn from experienced professionals in the field.\n");
	
}
void aerospace()
{
	printf("Aerospace engineering:\n\n");
    printf("High School:\n");
    printf("Focus on math and physics.\n");
    printf("Take relevant science courses.\n\n");
    printf("Bachelor's Degree:\n");
    printf("Enroll in aerospace engineering or a related program.\n");
    printf("Learn fundamentals like aerodynamics and materials.\n\n");
    printf("Gain Practical Skills:\n");
    printf("Seek internships or projects related to aerospace.\n");
    printf("Build hands-on experience.\n\n");
    printf("Specialization:\n");
    printf("Explore areas like aeronautics or astronautics.\n");
    printf("Take advanced courses in your chosen specialization.\n\n");
    printf("Job Readiness:\n");
    printf("Look for entry-level positions in aerospace companies.\n");
    printf("Develop a strong understanding of industry standards.\n\n");
    printf("Networking:\n");
    printf("Attend aerospace events and conferences.\n");
    printf("Join online communities and forums.\n\n");
    printf("Keep Learning:\n");
    printf("Pursue relevant certifications.\n");
    printf("Stay updated on aerospace advancements.\n\n");
    printf("Career Growth:\n");
    printf("Aim for roles with more responsibility.\n");
    printf("Consider advanced degrees if desired.\n\n");
    printf("Lifelong Learning:\n");
    printf("Stay informed about new technologies and trends.\n");
    printf("Continuously enhance your skills.\n\n");
    printf("This roadmap should help students navigate the path towards a career in aerospace engineering.\n");
}
void software()
{
	printf("Software engineering:\n\n");
    printf("High School:\n");
    printf("Focus on mathematics and computer science courses.\n");
    printf("Explore programming languages and basic algorithms.\n\n");
    printf("Bachelor's Degree:\n");
    printf("Enroll in a software engineering or computer science program.\n");
    printf("Learn foundational concepts like data structures and algorithms.\n\n");
    printf("Gain Practical Skills:\n");
    printf("Participate in coding projects and hackathons.\n");
    printf("Seek internships or part-time jobs related to software development.\n\n");
    printf("Specialization:\n");
    printf("Explore areas like web development, mobile app development, or artificial intelligence.\n");
    printf("Take advanced courses in your chosen specialization.\n\n");
    printf("Build a Portfolio:\n");
    printf("Showcase your projects on platforms like GitHub.\n");
    printf("Develop a portfolio website to display your skills and achievements.\n\n");
    printf("Networking:\n");
    printf("Attend tech meetups, conferences, or virtual events.\n");
    printf("Connect with professionals on LinkedIn and join relevant online communities.\n\n");
    printf("Stay Updated:\n");
    printf("Keep up with industry trends and emerging technologies.\n");
    printf("Participate in online forums and discussions.\n\n");
    printf("Job Readiness:\n");
    printf("Apply for entry-level positions or internships.\n");
    printf("Tailor your resume and cover letter to highlight relevant skills and experiences.\n\n");
    printf("Career Growth:\n");
    printf("Seek opportunities for professional development and training.\n");
    printf("Consider pursuing advanced degrees or certifications if desired.\n\n");
    printf("Lifelong Learning:\n");
    printf("Stay curious and continuously learn new technologies.\n");
    printf("Adapt to industry changes and explore new challenges.\n\n");
    printf("This roadmap is designed to guide students toward a successful career in software engineering.\n");
}
void mbbs()
{
	printf("(MBBS):\n\n");
    printf("High School:\n\n");
    printf("Focus on biology, chemistry, and physics.\n");
    printf("Aim for high academic performance.\n\n");
    printf("Bachelor's Degree (Pre-Medical):\n\n");
    printf("Enroll in a pre-medical program or a biology-related field.\n");
    printf("Take prerequisite courses for medical school.\n\n");
    printf("Entrance Exams:\n\n");
    printf("Prepare for and take medical school entrance exams (e.g., MCAT, BMAT).\n\n");
    printf("Medical School (MBBS):\n\n");
    printf("Successfully complete a Bachelor of Medicine, Bachelor of Surgery (MBBS) program.\n");
    printf("Rotate through different clinical specialties during your training.\n\n");
    printf("Internship/Residency:\n\n");
    printf("Undertake a mandatory internship or residency program.\n");
    printf("Gain hands-on experience in different medical specialties.\n\n");
    printf("Licensing Exams:\n\n");
    printf("Prepare for and pass licensing exams required for medical practice.\n\n");
    printf("Specialization (Optional):\n\n");
    printf("Consider pursuing a specialization or residency in a specific medical field.\n\n");
    printf("Networking:\n\n");
    printf("Connect with mentors, professors, and medical professionals.\n");
    printf("Attend medical conferences and events.\n\n");
    printf("Stay Updated:\n\n");
    printf("Stay abreast of advancements in medical research and practices.\n");
    printf("Engage in continuous medical education (CME) opportunities.\n\n");
    printf("Job Readiness:\n\n");
    printf("Apply for medical positions or residency programs.\n");
    printf("Compile a comprehensive medical portfolio.\n\n");
    printf("Career Growth:\n\n");
    printf("Advance to more specialized roles or leadership positions.\n");
    printf("Stay involved in medical research and contribute to advancements in the field.\n\n");
    printf("Lifelong Learning:\n\n");
    printf("Embrace a commitment to lifelong learning in the evolving field of medicine.\n");
    printf("Participate in professional development activities.\n\n");
    printf("Remember, the specifics may vary depending on the country or region, and it's important to check the requirements of the medical licensing authorities in the relevant area.\n");
	
}
void bds()
{
	printf("\ncareer in Dentistry (BDS - Bachelor of Dental Surgery):\n\n");
    printf("High School:\n");
    printf("   - Focus on biology, chemistry, and physics.\n");
    printf("   - Aim for a strong foundation in mathematics.\n\n");
    printf("Bachelor's Degree (BDS):\n");
    printf("   - Enroll in a BDS program or a related dental school.\n");
    printf("   - Study core subjects like oral anatomy, dental materials, and clinical dentistry.\n\n");
    printf("Clinical Experience:\n");
    printf("   - Gain hands-on experience through clinical rotations.\n");
    printf("   - Learn dental procedures and patient care.\n\n");
    printf("Specialization (Optional):\n");
    printf("   - Explore specialized areas like orthodontics or oral surgery.\n");
    printf("   - Pursue additional training or certifications if interested.\n\n");
    printf("Licensing and Certification:\n");
    printf("   - Fulfill licensing requirements for practicing dentistry.\n");
    printf("   - Obtain necessary certifications as per regional regulations.\n\n");
    printf("Networking:\n");
    printf("   - Connect with dental professionals and professors.\n");
    printf("   - Attend dental conferences and workshops.\n\n");
    printf("Job Readiness:\n");
    printf("   - Apply for dental internships or entry-level positions.\n");
    printf("   - Develop effective communication skills for patient interaction.\n\n");
    printf("Professional Development:\n");
    printf("   - Stay updated on the latest advancements in dentistry.\n");
    printf("   - Attend continuing education courses for skill enhancement.\n\n");
    printf("Career Growth:\n");
    printf("   - Consider opening a private practice or joining a dental clinic.\n");
    printf("   - Explore opportunities for research or teaching.\n\n");
    printf("Lifelong Learning:\n");
    printf("    - Stay informed about changes in dental practices.\n");
    printf("    - Engage in professional organizations to stay connected with the dental community.\n\n");
    printf("This roadmap is designed to guide students through the educational and professional steps toward a career in Dentistry (BDS).\n");
}
void dpt()
{
	printf("Physical Therapy (DPT - Doctor of Physical Therapy):\n\n");
    printf("High School:\n");
    printf("   - Focus on biology, anatomy, and chemistry courses.\n");
    printf("   - Volunteer or shadow in healthcare settings to gain exposure.\n\n");
    printf("Bachelor's Degree:\n");
    printf("   - Pursue a bachelor's degree in a related field (e.g., biology, kinesiology).\n");
    printf("   - Ensure completion of prerequisite courses for DPT programs.\n\n");
    printf("Gain Healthcare Experience:\n");
    printf("   - Volunteer or work as a physical therapy aide.\n");
    printf("   - Gain exposure to the clinical aspects of physical therapy.\n\n");
    printf("Prepare for Graduate School:\n");
    printf("   - Research DPT programs and their admission requirements.\n");
    printf("   - Aim for a competitive GPA and relevant extracurricular activities.\n\n");
    printf("Graduate School (DPT Program):\n");
    printf("   - Enroll in a DPT program accredited by the Commission on Accreditation in Physical Therapy Education (CAPTE).\n");
    printf("   - Complete clinical rotations to gain hands-on experience.\n\n");
    printf("Networking and Professional Associations:\n");
    printf("   - Connect with professionals and faculty in the field.\n");
    printf("   - Join physical therapy associations for networking and professional development.\n\n");
    printf("Clinical Residency (Optional):\n");
    printf("   - Consider participating in a clinical residency program for specialized training (optional).\n\n");
    printf("Licensing Exam:\n");
    printf("   - Prepare for and successfully complete the National Physical Therapy Examination (NPTE).\n\n");
    printf("Job Readiness:\n");
    printf("   - Apply for entry-level physical therapy positions.\n");
    printf("   - Tailor your resume to highlight clinical experiences and skills.\n\n");
    printf("Career Growth:\n");
    printf("    - Pursue continuing education to stay updated on best practices.\n");
    printf("    - Consider specialization areas within physical therapy.\n\n");
    printf("Lifelong Learning:\n");
    printf("    - Stay engaged with research and advancements in the field.\n");
    printf("    - Seek mentorship opportunities for ongoing professional development.\n\n");
    printf("This roadmap is designed to help students navigate the path toward becoming a Doctor of Physical Therapy.\n");
}
void phr()
{
	printf("Pharmacy:\n\n");
    printf("High School:\n");
    printf("Focus on biology, chemistry, and mathematics courses.\n");
    printf("Consider volunteering or shadowing experiences in healthcare settings.\n\n");
    printf("Bachelor's Degree (Pre-Pharmacy):\n");
    printf("Pursue a bachelor's degree with a focus on pre-pharmacy or a related field.\n");
    printf("Complete prerequisite courses in chemistry, biology, and physics.\n\n");
    printf("Pharmacy College Admission Test (PCAT):\n");
    printf("Prepare for and take the PCAT exam (if required by the pharmacy school).\n\n");
    printf("Pharm.D. Program:\n");
    printf("Enroll in a Doctor of Pharmacy (Pharm.D.) program.\n");
    printf("Study pharmacy practice, pharmaceutical sciences, and clinical rotations.\n\n");
    printf("Gain Practical Experience:\n");
    printf("Complete internships or rotations in pharmacies or healthcare settings.\n");
    printf("Apply classroom knowledge in real-world scenarios.\n\n");
    printf("Networking:\n");
    printf("Attend pharmacy conferences, workshops, or networking events.\n");
    printf("Connect with professionals in the field through internships.\n\n");
    printf("Licensing and Certification:\n");
    printf("Fulfill licensing requirements after graduation.\n");
    printf("Obtain necessary certifications for specialized areas if desired.\n\n");
    printf("Job Readiness:\n");
    printf("Apply for entry-level pharmacist positions.\n");
    printf("Develop a strong resume showcasing your experiences and skills.\n\n");
    printf("Continuing Education:\n");
    printf("Stay updated on pharmaceutical advancements.\n");
    printf("Participate in continuing education to maintain licensure.\n\n");
    printf("Career Growth:\n");
    printf("Explore opportunities for specialization or advanced roles.\n");
    printf("Consider pursuing a residency or advanced degrees for certain career paths.\n\n");
    printf("Lifelong Learning:\n");
    printf("Stay informed about healthcare trends.\n");
    printf("Engage in professional development and adapt to changes in the field.\n\n");
    printf("This roadmap is designed to guide students towards a fulfilling career in pharmacy. Keep in mind that specific requirements may vary by region and country.\n");
}
void AI()
{
	printf("a career in Artificial Intelligence (AI):\n\n");
    printf("High School:\n");
    printf("Focus on mathematics, especially algebra and statistics.\n");
    printf("Begin learning programming languages like Python.\n");
    printf("Explore introductory courses in artificial intelligence and machine learning.\n\n");
    printf("Bachelor's Degree:\n");
    printf("Enroll in a computer science or AI-related program.\n");
    printf("Learn foundational concepts such as machine learning algorithms and data analysis.\n\n");
    printf("Gain Practical Skills:\n");
    printf("Engage in AI-related projects and coding challenges.\n");
    printf("Seek internships or research opportunities in AI.\n\n");
    printf("Specialization:\n");
    printf("Explore specific areas of AI, such as natural language processing or computer vision.\n");
    printf("Take advanced courses or participate in projects within your chosen specialization.\n\n");
    printf("Build a Portfolio:\n");
    printf("Showcase your AI projects on platforms like GitHub.\n");
    printf("Develop a personal website or blog to demonstrate your expertise.\n\n");
    printf("Networking:\n");
    printf("Attend AI conferences, workshops, or meetups.\n");
    printf("Connect with professionals and researchers in the AI field through online platforms.\n\n");
    printf("Stay Updated:\n");
    printf("Keep abreast of the latest developments in AI and machine learning.\n");
    printf("Subscribe to relevant journals, blogs, or podcasts.\n\n");
    printf("Job Readiness:\n");
    printf("Apply for entry-level positions in AI or machine learning.\n");
    printf("Tailor your resume to highlight AI-related skills and experiences.\n\n");
    printf("Career Growth:\n");
    printf("Pursue advanced degrees (master's or Ph.D.) if desired.\n");
    printf("Seek mentorship and opportunities for leadership roles.\n\n");
    printf("Lifelong Learning:\n");
    printf("Embrace a mindset of continuous learning, given the rapidly evolving nature of AI.\n");
    printf("Stay involved in the AI community and contribute to open-source projects.\n\n");
    printf("This roadmap aims to guide students toward a rewarding career in the field of Artificial Intelligence.\n");
	
}
void cys()
{
    printf("a career in cybersecurity:\n\n");
    printf("High School:\n");
    printf("Focus on math, computer science, and information technology courses.\n");
    printf("Develop a basic understanding of networking concepts.\n\n");
    printf("Bachelor's Degree:\n");
    printf("Enroll in a cybersecurity or related program.\n");
    printf("Learn fundamentals of computer security, cryptography, and network security.\n\n");
    printf("Gain Practical Skills:\n");
    printf("Participate in cybersecurity competitions (Capture The Flag, hackathons).\n");
    printf("Seek internships or part-time roles in IT or security-related positions.\n\n");
    printf("Specialization:\n");
    printf("Explore areas like penetration testing, incident response, or security analysis.\n");
    printf("Take advanced courses in your chosen specialization.\n\n");
    printf("Certifications:\n");
    printf("Pursue relevant certifications such as CompTIA Security+, Certified Ethical Hacker (CEH), or Certified Information Systems Security Professional (CISSP).\n\n");
    printf("Build a Portfolio:\n");
    printf("Showcase your hands-on experience through a portfolio.\n");
    printf("Document personal or collaborative cybersecurity projects.\n\n");
    printf("Networking:\n");
    printf("Attend cybersecurity conferences and local security meetups.\n");
    printf("Connect with professionals in the field through LinkedIn and online forums.\n\n");
    printf("Stay Updated:\n");
    printf("Keep abreast of the latest cybersecurity threats and trends.\n");
    printf("Subscribe to industry newsletters and follow reputable cybersecurity blogs.\n\n");
    printf("Job Readiness:\n");
    printf("Apply for entry-level positions such as security analyst or junior cybersecurity roles.\n");
    printf("Customize your resume to highlight cybersecurity skills and certifications.\n\n");
    printf("Career Growth:\n");
    printf("Pursue advanced roles such as cybersecurity consultant or security architect.\n");
    printf("Consider obtaining higher-level certifications as your experience grows.\n\n");
    printf("Lifelong Learning:\n");
    printf("Engage in continuous learning to stay ahead of evolving cybersecurity threats.\n");
    printf("Mentor others and contribute to the cybersecurity community.\n\n");
    printf("This roadmap is designed to help students build a strong foundation and progress toward a successful career in cybersecurity.\n");	
}
void cs()
{
    printf("a career in computer science:\n\n");
    printf("High School:\n");
    printf("Emphasize mathematics and computer science courses.\n");
    printf("Familiarize yourself with programming languages and basic algorithms.\n\n");
    printf("Bachelor's Degree:\n");
    printf("Enroll in a computer science program.\n");
    printf("Master foundational concepts like algorithms, data structures, and computer architecture.\n\n");
    printf("Gain Practical Skills:\n");
    printf("Engage in coding projects and participate in coding competitions.\n");
    printf("Seek internships or part-time jobs related to computer science.\n\n");
    printf("Specialization:\n");
    printf("Explore areas such as artificial intelligence, data science, or cybersecurity.\n");
    printf("Take advanced courses in your chosen specialization.\n\n");
    printf("Build a Portfolio:\n");
    printf("Showcase your coding projects on platforms like GitHub.\n");
    printf("Develop a personal website to highlight your skills and projects.\n\n");
    printf("Networking:\n");
    printf("Attend computer science conferences, meetups, or virtual events.\n");
    printf("Connect with professionals on LinkedIn and join online communities.\n\n");
    printf("Stay Updated:\n");
    printf("Keep abreast of industry trends and emerging technologies.\n");
    printf("Participate in online forums and discussions.\n\n");
    printf("Job Readiness:\n");
    printf("Apply for entry-level positions or internships.\n");
    printf("Customize your resume and cover letter to emphasize relevant skills and experiences.\n\n");
    printf("Career Growth:\n");
    printf("Seek opportunities for professional development and training.\n");
    printf("Consider pursuing advanced degrees or certifications based on career goals.\n\n");
    printf("Lifelong Learning:\n");
    printf("Stay curious and continuously learn new programming languages and frameworks.\n");
    printf("Adapt to changes in technology and explore new challenges.\n\n");
    printf("This roadmap is designed to help students navigate their journey toward a fulfilling career in computer science.\n");
}
void university(int a)
{
	int m;
	printf("\n\nEnter university fee range : ");
	scanf("%d",&m);
	switch (a)
	{
		case 1 :
			if(m>200000)
			{
			   printf("University suggestions\n");	
			   printf("FAST University \n");
			   printf("NUST University\n");
			   printf("GIKI University\n");
			   printf("COMSATS University\n");
			   printf("Air University\n");
			   printf("NUML University\n");
			   printf("Habib University\n");	
			}
			else
			{
				printf("University suggestions\n");
				printf("Mehran University\n");
				printf("KU University\n");
				printf("Quaid-e-Azam University\n");
				printf("Dawood University\n");
				printf("NED University\n");
				printf("Punjab University\n");
			}
			break;
		case 2 :
			if(m>=500000)
			{
				printf("University suggestions\nUniversity fee Ranges above 500k\n");
			   	printf("Agha Khan University\n");
			   	printf("DOW University \n");
			   	printf("LUMS University\n");
			    printf("Bahria University of Medical and Dental collage\n");
				printf("Zia-u-din Medical University\n");  	
			}
			else
			{
				printf("University suggestions\n");
			    printf("NUMS University\n");
			    printf("Hamdard University\n");
				printf("JSMU University\n");
				printf("Sir Syed University\n");
				printf("SIUT University\n");
				printf("INDUS University\n");
			}
		break;
		   
		case 3 : 
		    if(m>150000)
			{
			   printf("University suggestions\n");	
		       printf("FAST University \n");
			   printf("NUST University\n");
			   printf("GIKI University\n");
			   printf("Air University\n");
			   printf("Habib University\n");
			   printf("COMSATS University\n");
			   printf("IBA University\n");
			   printf("LUMS University\n");
			   	
			}
			else
			{
				printf("University suggestions\n");
				printf("Mehran University\n");
				printf("KU University\n");
				printf("Quaid-e-Azam University\n");
				printf("Indus University\n");
				printf("NED University\n");
				printf("Punjab University\n");
			}
		break;  
	}
}
