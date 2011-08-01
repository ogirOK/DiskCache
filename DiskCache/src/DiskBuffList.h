/*
 * DiskBuffList.h
 *
 *  Created on: Aug 1, 2011
 *      Author: user
 */

#ifndef DISKBUFFLIST_H_
#define DISKBUFFLIST_H_

#include "DiskBuff.h"
#include "CrossPthreadMutex.h"

class DiskBuffList
{
private:
	DiskBuff* pHead;
	DiskBuff* pTail;
	CrossPthreadRWLock* rw_lock; 			//lock class
	CrossPthreadMutex* countElem_lock;	//mutex for variable countelement
public:
	DiskBuffList();
	~DiskBuffList();
	void AddToHead(DiskBuff el);
	void AddToTail(DiskBuff el);
	void Delete(DiskBuff * el);
	DiskBuff* GetHead();

};



#endif /* DISKBUFFLIST_H_ */
