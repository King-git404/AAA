/**
 * ������Process
 * 
 * @ClassName: Process
 */
public class Process {
    private int arriveTime;// ����ʱ��
    private int serverTime;// ����ʱ�䣬�����޸�
    private int finishTime;// ���ʱ��
    private int turnoverTime;// ��תʱ��
    private double quanTurnoverTime;// ��Ȩ��תʱ��

    public int getRealServerTime() {
        return realServerTime;
    }

    public void setRealServerTime(int realServerTime) {
        this.realServerTime = realServerTime;
    }

    private int realServerTime; // �����ķ���ʱ�䣬�����޸�

    public Process() {
    }

    public Process(int arriveTime, int serverTime) {
        super();
        this.arriveTime = arriveTime;
        this.serverTime = serverTime;
    }

    public int getArriveTime() {
        return arriveTime;
    }

    public void setArriveTime(int arriveTime) {
        this.arriveTime = arriveTime;
    }

    public int getServerTime() {
        return serverTime;
    }

    public void setServerTime(int serverTime) {
        this.serverTime = serverTime;
    }

    public int getFinishTime() {
        return finishTime;
    }

    public void setFinishTime(int finishTime) {
        this.finishTime = finishTime;
    }

    public int getTurnoverTime() {
        return turnoverTime;
    }

    public void setTurnoverTime(int turnoverTime) {
        this.turnoverTime = turnoverTime;
    }

    public double getQuanTurnoverTime() {
        return quanTurnoverTime;
    }

    public void setQuanTurnoverTime(double quanTurnoverTime) {
        this.quanTurnoverTime = quanTurnoverTime;
    }

}
