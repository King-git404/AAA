#include <windows.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     char ch ;
//     scanf("%c", &ch);
//     if (ch >= 'A' && ch <= 'Z')
//     {
//         ch = ch + 32;
//     }
//     else if (ch >= 'a' && ch <= 'z')
//     {
//         ch = ch - 32;
//     }

//     printf("%c\n", ch);
//     return 0;
// }

// int main()
// {
//     int y, m, d;
//     scanf("%d/%d/%d", &y, &m, &d);
//     printf("%d--%d--%d\n", y, m, d);
//     system("pause");
// }

// 在任意一个四位整数中，如果该数的个位数和百位数之和大于16，并且十位数和千位数之和小于3，就称这种数为“老九幸运数“，
// 请小伙伴编程计算出在1000~9999中，一共有多少个满足老九幸运数的四位整数呢，打印出最终的个数

// int main()
// {
//     int a, b, c, d, co = 0;
//     for (int i = 1000; i <= 9999; i++)
//     {

//         a = i % 10;
//         b = i / 10 % 10;
//         c = i / 100 % 10;
//         d = i / 1000;
//         if (a + c > 16 && b + d < 3)
//         {
//             cout<<i<<endl;
//             co ++;
//         }
//     }
//     cout<<"一共有 "<<co<<" 个"<<endl;
// }

// int main()
// {
//     int num = 1234;
//     int a, b, c, d;

//     a = num % 10;
//     c = num / 100 % 10;
//     b = num / 10 % 10;
//     d = num / 1000;
//     cout << a << b << c << d << endl;
// }

// #define N 5 //宏定义 ，并不是必须的  好处是功能方便
// int main()
// {
//     int nums[N] = {16, 25, 9, 90, 23};
//     int i, j;
//     int temp;
//     // 先确定外层循环
//     for (i = 0; i < N - 1; i++)
//     {
//         for (j = 0; j < N - i - 1; j++)
//         {
//             if (nums[j] < nums[j + 1])
//             {
//                 temp = nums[j];
//                 nums[j] = nums[j + 1];
//                 nums[j + 1] = temp;
//             }
//         }
//     }
//     printf("排序后的数组是：\n");
//     for (i = 0; i < N; i++)
//     {
//         printf("%d\t", nums[i]);
//     }
// }

// int main()
// {
//     int a,b,c;
//     a = 72, b = 73, c = 74;
//     printf("%f%f%f\n", a, b, c);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     char a, as, bs, cs, ds;
//     int n;
//     for (a = 'A'; a <= 'D'; a++)
//     {
//         as = (a != 'A');
//         bs = (a == 'C');
//         cs = (a == 'D');
//         ds = (a != 'D');
//         n = as + bs + ds + cs;
//         if (n == 3)
//             printf(" %c\n", a);
//     }

//     return 0;
// }

// int main()
// {
//     int a, b, c, a1, b1, sum, count = 10, Ming = 0;

//     scanf("%d %d", &a, &b);

//     c = a + b;

//     while (a > 0 && b > 0)
//     {
//         a1 = a % 10;
//         b1 = b % 10;
//         if ((a1 + b1) >= 10)
//             Ming = Ming + 1 * count;
//         count = count * 10;
//         a = a / 10;
//         b = b / 10;
//     }
//     sum = c - Ming;
//     printf("%d %d\n", c, sum);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     int a, b, index;
//     int c[12];
//     while (scanf("%d %d", &a, &b) != EOF)
//     {
//         //正确答案
//         printf("%d ", a + b);
//         //求小名的答案
//         if (a == 0 && b == 0)
//         {
//             printf("%d", a + b);
//         }
//         index = 0;
//         while (a || b)
//         {
//             int sum = a % 10 + b % 10;
//             if (sum > 9)
//             {
//                 sum -= 10;
//             }
//             c[index++] = sum;
//             a /= 10;
//             b /= 10;
//         }
//         //去掉前导0
//         index = index - 1;
//         while (c[index] == 0 && index > 0)
//         {
//             index--;
//         }
//         //输出答案
//         for (int i = index; i >= 0; i--)
//         {
//             printf("%d", c[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// private:
//     int sno;
//     string sname;
//     int sage;

// public:
//     Student()
//     {
//         sno = 0;
//         sname = "";
//         sage = 0;
//     }
//     Student(int no, string name, int age)
//     {
//         sno = no;
//         sname = name;
//         sage = age;
//     }
//     void show();
//     ~Student()
//     {
//         cout << "学生析构函数调用" << endl;
//     }
// };

// void Student::show()
// {
//     cout << "学号：" << sno << endl;
//     cout << "姓名：" << sname << endl;
//     cout << "年龄：" << sage << endl;
// }
// class Teacher
// {
// private:
//     int tnum;
//     string tname;
//     string tdepart;

// public:
//     Teacher()
//     {
//         tnum = 0;
//         tname = "";
//         tdepart = "";
//     }
//     Teacher(int num, string name, string depart)
//     {
//         tnum = num;
//         tname = name;
//         tdepart = depart;
//     }
//     void Show();
//     ~Teacher()
//     {
//         cout << "教师析构函数调用" << endl;
//     }
// };
// void Teacher::Show()
// {
//     cout << "学号：" << tnum << endl;
//     cout << "姓名：" << tname << endl;
//     cout << "??：" << tdepart << endl;
// }

// class GradOnWork : public Student, public Teacher
// {
// private:
//     string research;
//     string professor;

// public:
//     GradOnWork(){
//         research = "计算机学院";
//         professor = "计算机应用技术";
//     }
//     GradOnWork(int id, string name, int age, string tdepart, string research1, string professor2){
//         cout << research1 << "- " << professor2 << endl;
//     }

//     void ShowMe(){

//     }
//     ~GradOnWork()
//     {
//         cout << "在职研究生析构函数调用" << endl;
//     }
// };
// GradOnWork::GradOnWork(int id, string name, int age, string tdepart, string research,
//                        string professor)
//     : Student(id, name, age), Teacher(id, name, tdepart) {}
// void GradOnWork::ShowMe()
// {
//     Student::show();
//     Teacher::Show();

// }
// int main()
// {
//     GradOnWork Gwork(12, "蔡徐坤", 18, "???", "计算机学院", "计算机应用技术");
//     Gwork.ShowMe();
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// class Person
// {
//     char Name[20];
//     char Sex;
//     int Age;

// public:
//     void Register(char name[], int age, char sex);
//     void ShowMe();
// };
// void Person::Register(char name[], int age, char sex)
// {
//     strcpy(Name, name);
//     Age = age;
//     Sex = sex;
// }
// void Person::ShowMe()
// {
//     cout << "姓名 " << Name << endl;
//     cout << "性别 " << (Sex == 'm' ? "男" : "女") << endl;
//     cout << "年龄 " << Age << endl;
// }
// class Teacher : virtual public Person
// {
//     char Dept[20];
//     int Salary;

// public:
//     Teacher(char name[], int age, char sex, char dept[], int salary);
//     void Show(); //显示新增数据成员
// };
// Teacher::Teacher(char name[], int age, char sex, char dept[], int salary)
// {
//     Person::Register(name, age, sex);
//     strcpy(Dept, dept);
//     Salary = salary;
// }
// void Teacher::Show()
// {
//     cout << "工作单位 " << Dept << endl;
//     cout << "月薪 " << Salary << endl;
// }
// class Student : virtual public Person
// {
//     char ID[12];
//     char Class[12];

// public:
//     Student(char name[], int age, char sex, char ID[], char Class[]);
//     void Show(); //显示新增数据成员
// };
// Student::Student(char name[], int age, char sex, char id[], char classname[])
// {
//     Person::Register(name, age, sex);
//     strcpy(ID, id);
//     strcpy(Class, classname);
// }
// void Student::Show()
// {
//     cout << "班级 " << Class << endl;
//     cout << "学号 " << ID << endl;
// }
// class Graduate : public Student, public Teacher
// {
// public:
//     Graduate(char name[], int age, char sex, char dept[], int salary, char id[], char classid[]);
//     void ShowMe(); //显示数据成员，要求调用基类的Show和ShowMe
// };
// Graduate::Graduate(char name[], int age, char sex, char dept[], int salary, char id[], char classid[])
//     : Student(name, age, sex, id, classid), Teacher(name, age, sex, dept, salary) {}
// void Graduate::ShowMe()
// {
//     Student::Show();
//     Person::ShowMe();
//     Teacher::Show();
// }
// int main()
// {

//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class BirthDate
// {
// public:
//     BirthDate(int, int, int);
//     void display();
//     void setbirthday(int, int, int);

// private:
//     int year;
//     int month;
//     int day;
// };
// class Teacher
// {
// public:
//     Teacher(int, string, char);
//     void display();

// private:
//     int num;
//     string name;
//     char sex;
// };
// class Professor : public Teacher
// {
// public:
//     Professor(int, string, char, string research, BirthDate);
//     void display();
//     void setbirthday(int, int, int);

// private:
//     BirthDate birthday;
//     string research;
// };

// BirthDate::BirthDate(int y, int m, int d) : year(y), month(m), day(d) {}
// void BirthDate::display()
// {
//     cout << "birthday:" << year << "/" << month << "/" << day << endl;
// }
// void BirthDate::setbirthday(int y, int m, int d)
// {
//     year = y;
//     month = m;
//     day = d;
// }
// Teacher::Teacher(int n, string na, char s) : num(n), name(na), sex(s) {}
// void Teacher::display()
// {
//     cout << "num:" << num << endl;
//     cout << "name:" << name << endl;
//     cout << "sex:" << sex << endl;
// }
// Professor::Professor(int n, string na, char s, string research, BirthDate birthdate) : Teacher(n, na, s), birthday(birthdate)
// {
//     this->research = research;
// }
// void Professor::display()
// {
//     cout << "research:" << research << endl;
//     Teacher::display();
//     birthday.display();
// }

// void Professor::setbirthday(int y, int m, int d)
// {
//     birthday.setbirthday(y, m, d);
// }

// int main()
// {
//     int num = 1;
//     string name = "蔡徐坤";
//     char sex = 'n';
//     int year = 1999, month = 1, day = 1;
//     string research = "蔡徐坤";
//     // cin >> num >> name >> sex;
//     // cin >> year >> month >> day;
//     Professor prof(num, name, sex, research, BirthDate(year, month, day));
//     //cin >> research;
//     prof.setbirthday(year, month, day);
//     prof.display();
//     return 0;
// }

//求一个3*3矩阵对角线元素之和
// #include <stdio.h>
// int main()
// {

//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //定义二维数组
//     int i, j;
//     int sum = 0;
//     printf("请输入3*3矩阵的元素\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             //scanf("%d", &a[i][j]);   //输入数组数组元素
//             if (i == j)              //判断是否是对角线元素
//                 sum = sum + a[i][j]; //求和
//         }
//     }
//     printf("3*3矩阵对角线元素之和为%6.2d\n", sum);
//     printf("输出3*3的数组：\n");
//     for (i = 0; i < 3; i++) //输出二维数组
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%6d", a[j][i]);
//         }
//         printf("\n"); //换行输出*
//     }

//     return 0;
// }

// double add(double x, double y)
// {
//     return x + y;
// }

// // int main(int argc, char const *argv[])
// // {
// //     double c = add(123.33,12);
// //     cout<<c<<endl;
// //     return 0;
// // }

// double mypow(double x, int n)
// {
//     return pow(x, n);
// }

// int sum(int n)
// {
//     if (n == 1)
//         return 1;
//     else
//         return n + sum(n - 1);
// }

// int main(int argc, char const *argv[])
// {
//     //double c = mypow(5, 5);
//     int c = sum(100);
//     cout << c << endl;
//     return 0;
// }

// 1、某学校对教师每月工资的计算公式如下：固定工资 + 课时补贴。教授的固定工资为5000元,
// 每个课时补贴50元；副教授的固定工资为3000元, 每个课时补贴30元;讲师的固定工资为2000元,
//  每个课时补贴20元。定义教师抽象类, 派生不同职称的教师类, 编写程序求若干教师的月工资。

// //教师抽象类
// class Teacher
// {
// protected:
//     double salary;
//     int workhours;

// public:
//     Teacher(int wh = 0) { workhours = wh; }
//     virtual void cal_salary() = 0;
//     void print() { cout << salary << endl; }
// };
// //教授
// class Prof : public Teacher
// {
// public:
//     Prof(int wh = 0) : Teacher(wh) {}
//     void cal_salary()
//     {
//         salary = workhours * 50 + 5000;
//     }
// };
// //副教授
// class Vice_Prof : public Teacher
// {
// public:
//     Vice_Prof(int wh = 0) : Teacher(wh) {}
//     void cal_salary()
//     {
//         salary = workhours * 30 + 3000;
//     }
// };
// //讲师
// class Lecture : public Teacher
// {
// public:
//     Lecture(int wh = 0) : Teacher(wh) {}
//     void cal_salary()
//     {
//         salary = workhours * 20 + 2000;
//     }
// };
// int main()
// {
//     Teacher *pt;
//     Prof prof(200);
//     pt = &prof;
//     pt->cal_salary();
//     prof.print();
//     Vice_Prof vice_prof(250);
//     pt = &vice_prof;
//     pt->cal_salary();
//     vice_prof.print();
//     Lecture lecture(100);
//     pt = &lecture;
//     pt->cal_salary();
//     lecture.print();
//     return 0;
// }
//getSuperficialArea计算表面积、getVolume 计算体积、showAll 输出所有信息。
//●派生类Cuboid表示长方体类，增加3个属性(width表示宽度、length表示长度、height表示高度)。
//.派生类Sphere 表示球体类，增加1个属性(radius 表示半径)。
//●派生类Cylinder表示圆柱体类，增加2个属性(radius表示半径，high表示高度)。
// class SolidFigue
// {
// public:
//     virtual double getSuperficialArea() const = 0;
//     virtual double getVolume() const = 0;
//     virtual void showAll() const = 0;
// };

// class Cuboid : public SolidFigue
// {
// protected:
//     double width;
//     double length;
//     double heigh;

// public:
//     Cuboid(double width, double length, double heigh)
//     {
//         this->width = width;
//         this->heigh = heigh;
//         this->length = length;
//     }

//     virtual double getSuperficialArea() const { return (width * heigh + width * length + heigh * length) * 2; };
//     virtual double getVolume() const { return width * heigh * length; };
//     virtual void showAll() const { cout << "长方体面积  " << getSuperficialArea() << "\t体积 " << getVolume() << endl; };
// };
// //.派生类Sphere 表示球体类，增加1个属性(radius 表示半径)。V=(4/3)πr^3 
// //●派生类Cylinder表示圆柱体类，增加2个属性(radius表示半径，high表示高度)。
// class Sphere : public SolidFigue
// {
// protected:
//     double radius;

// public:
//     Sphere(double radius)
//     {
//         this->radius = radius;
//     }
//     virtual double getSuperficialArea() const { return 4 * 3.14 * radius * radius; };
//     virtual double getVolume() const { return 3.14 * radius * radius * radius * (4 / 3); };
//     virtual void showAll() const { cout << "球的面积  " << getSuperficialArea() << "\t体积 " << getVolume() << endl; };
// };
// class Cylinder : public SolidFigue
// {
// protected:
//     double radius;
//     double heigh;

// public:
//     Cylinder(double radius, double heigh)
//     {
//         this->radius = radius;
//         this->heigh = heigh;
//     }
//     //圆柱体表面积公式bai：duS=2πr²+2πrh
//     //体积zhi公式：daoV = πr²h
//     virtual double getSuperficialArea() const { return 2 * 3.14 * heigh * heigh + 2 * 3.14 * heigh * heigh; };
//     virtual double getVolume() const {return 3.14 * heigh * radius * radius;};
//     virtual void showAll() const { cout << "圆柱体的面积  " << getSuperficialArea() << "\t体积 " << getVolume() << endl; };
// };
// void print(const SolidFigue &s)
// {
//     s.showAll();
// }

// int main(int argc, char const *argv[])
// {
//     Cuboid cb(1, 2, 3);
//     print(cb);
//     Sphere s(4);
//     print(s);
//     Cylinder c(4,10);
//     print(c);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int i = 2;
//     int j = 2;
//     for (i; i <= 20; i++)

//         for (j; j <= i; j++)

//             if (i % j == 0)

//                 break;

//     if (j > i - i)

//         cout << i << endl;
    
// }

// int main()
// {
//     int n, x, max = 0, min = 10, sum = 0;
//     double aa;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         if (x > max)
//             max = x;
//         if (x < min)
//             min = x;
//         sum += x;
//     }
//     int a = n - 2;
//     aa = (double)(sum - max - min) / a;
//     printf("%.2f\n", aa);
//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     for (int i = 2; i < 6; i++, i++)
//     {
//         printf("##%*d",i);
//     }
//     return 0;
// }

#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    float b, c;

    scanf("%d", &a);

    scanf("%f", &b);

    c = b;

    if ((a >= 10) && (b >= 10000))
        c = b * (1 - 0.15);
    printf("Should pay:%9.2f\n", c);
    /* code */
    return 0;
}
