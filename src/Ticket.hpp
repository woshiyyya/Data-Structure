#ifndef TICKET_HPP
#define TICKET_HPP

#include <cstring>

const int SEAT_TYPE_NUM = 12;

enum SeatType {
	FirstClass = 0, // һ���� 
	SecondClass = 1, // ������
	NoSeat = 2, // ���� 
	BusinessSeat = 3, // ������ 
	HardSeat = 4, // Ӳ��
	SoftSeat = 5, // ����
	HardSleeperUp = 6, // Ӳ����
	HardSleeperMiddle = 7, // Ӳ���� 
	HardSleeperDown = 8, // Ӳ����
	SoftSleeperDown = 9, // ������
	AdvancedSoftSleeper = 10, // �߼�����
	SpecialSeat = 11 //�ص��� 
};

class TicketInfo {
public:
	string trainNumber;
	string start;
	string end;
	Date date;
	SeatType type;
	int price;
	
	TicketInfo(const string &trainNumber, const string &start, const string &end, const Date &date, const SeatType type, const int &price) :
		trainNumber(trainNumber),
		start(start),
		end(end),
		date(date),
		type(type),
		price(price)
	{ }
};

#endif
