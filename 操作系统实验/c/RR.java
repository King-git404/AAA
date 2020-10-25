


import java.text.DecimalFormat;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

/**
 * ��ת�����㷨
 *
 * @ClassName: RouletteSchedule
 */
public class RR {
    private static int finishTime = 0;

    public static void main(String[] args) {

//        @SuppressWarnings("resource")
//        Scanner s = new Scanner(System.in);
        int q = 2; // ʱ��Ƭ��RR

        Process A = new Process(0,4);
        Process B = new Process(1,3);
        Process C = new Process(2,4);
        Process D = new Process(3,2);
        Process E = new Process(4,4);

        //���������ķ���ʱ��
        A.setRealServerTime(A.getServerTime());
        B.setRealServerTime(B.getServerTime());
        C.setRealServerTime(C.getServerTime());
        D.setRealServerTime(D.getServerTime());
        E.setRealServerTime(E.getServerTime());

        LinkedList<Process> list = new LinkedList<Process>();
        list.add(A);
        list.add(B);
        list.add(C);
        list.add(D);
        list.add(E);


        //��ȡ���Ƴ����е�ͷ
        Process p;
        while((p = list.poll()) !=null ) {
            //���̷����ʱ�� С�ڵ��� ʱ��Ƭ��p
            if(p.getServerTime() <= q) {
                p.setFinishTime(finishTime + p.getServerTime());
                finishTime += p.getServerTime();
                p.setTurnoverTime(p.getFinishTime() - p.getArriveTime());
                p.setQuanTurnoverTime((double) p.getTurnoverTime() / (double)p.getRealServerTime());
            }else if(p.getServerTime() > q){ //����
                p.setFinishTime(finishTime + q);
                finishTime += q;
                p.setServerTime(p.getServerTime() - q);
                list.add(p);//��������ֲ��β
            }
        }

        print(A);
        print(B);
        print(C);
        print(D);
        print(E);

        //��ӡƽ����תʱ��
        avgTurnoverTime(A,B,C,D,E);
        //��ӡ��Ȩ��תʱ��
        avgQuanTurnoverTime(A,B,C,D,E);
    }

    /**
     * ��ӡ������
     * @Title: print
     * @return void
     */

    //��ʽ��С����������λС��
    static DecimalFormat df = new DecimalFormat("0.00");

    private static int i = 1;
    public static void print(Process p) {
        System.out.println("��"+(i++)+"������     ���ʱ��: "+p.getFinishTime()+"\t��תʱ��: "+
                p.getTurnoverTime()+"\t��Ȩ��תʱ�䣺"+df.format(p.getQuanTurnoverTime()));
    }

    /**
     * ƽ����תʱ��
     */
    public static void avgTurnoverTime(Process...process) {
        int i = 0;
        double sum = 0;
        for (Process p : process) {
            sum += p.getTurnoverTime();
            i++;
        }
        System.out.println("ƽ����תʱ��Ϊ��"+sum/i);
    }

    /**
     * ƽ����Ȩ��תʱ��
     */
    public static void avgQuanTurnoverTime(Process...process) {
        int i = 0;
        double sum = 0;
        for (Process p : process) {
            sum += p.getQuanTurnoverTime();
            i++;
        }
        System.out.println("ƽ����Ȩ��תʱ��Ϊ��"+df.format(sum/i));
    }

}

