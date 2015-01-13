
#ifndef StraightBuffer_h
#define StraightBuffer_h


#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class StraightBuffer{
	public:
	
	StraightBuffer(int);
	
	void reset();
	int getWritePosition();
	int getReadPosition();
	int getNumRemaining();
	void setWritePosition(int index);
	void setReadPosition(int index);
	byte* getBufferAddress();
	
	// Putters
	void write(byte in);
	void writeInt(int in);
	void writeLong(long in);
	
	// Getters
	byte read();
	int	readInt();
	long readLong();
	
	byte peek();
	
	
	
	private:
	byte* _buffer;
	int _putter;
	int _getter;
	int _maxCapacity;
	
};

#endif