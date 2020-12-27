#ifdef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct_student_Student;

struct_student_{
chat name{STUDNET_NAME_LEN};
int32_t regnumber;
char program{PROGRAM_NAME_LEN};
char email{EMAIL_LEN};
int32_t rank;
int32_t ug_grade;
char ad_status{STATUS_LEN};
};

typedef struct_program_Program;

struct_student_{
int8_t machine_learning_seats;
int8_t bda_seats;
int8_t hda_seats;

int8_t ml_seats_filled;
int8_t bda_seats_filled;
int8_t hda_seats_filled;
};

Program    program_seats(int8_t ml, int8_t bda, int8_t hda);
Student    srudent_new(char name[], char prg[], char mail[]);
int32_t    test_admission_status(Student s1);
int8_t     filled seats(Program pg, char pr[]);
int8_t     allot_seats(Program pg, char pr[]);



