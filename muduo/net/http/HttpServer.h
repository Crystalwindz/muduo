// Copyright 2010, Shuo Chen.  All rights reserved.
// http://code.google.com/p/muduo/
//
// Use of this source code is governed by a BSD-style license
// that can be found in the License file.

// Author: Shuo Chen (chenshuo at chenshuo dot com)
//
// This is a public header file, it must only include public header files.

#ifndef MUDUO_NET_HTTP_HTTPSERVER_H
#define MUDUO_NET_HTTP_HTTPSERVER_H

#include <boost/noncopyable.hpp>
#include <muduo/net/TcpServer.h>

namespace muduo
{
namespace net
{

class HttpServer : boost::noncopyable
{
 public:
  HttpServer(EventLoop* loop, 
             const InetAddress& listenAddr,
             const string& name);

  void start();

 private:
  TcpServer server_;
};

}
}

#endif  // MUDUO_NET_HTTP_HTTPSERVER_H
