/*
 * CrossPthreadMutex.cpp
 *
 *  Created on: Jul 29, 2011
 *      Author: user
 */
#include "CrossPthreadMutex.h"

//#ifdef LINUX

CrossPthreadMutex::CrossPthreadMutex()
{
	pthread_mutexattr_t attr;
	pthread_mutexattr_init(&attr);
	pthread_mutexattr_settype(&attr,PTHREAD_MUTEX_ERRORCHECK);
	pthread_mutex_init(&(this->_mutex),&attr);
}

CrossPthreadMutex::~CrossPthreadMutex()
{
	pthread_mutex_destroy(&(this->_mutex));
}

void CrossPthreadMutex::Lock()
{
	pthread_mutex_lock(&(this->_mutex));

}

void CrossPthreadMutex::Unlock()
{
	pthread_mutex_unlock(&(this->_mutex));
}
//#endif
