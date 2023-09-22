/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef match_TYPES_H
#define match_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>


namespace match_service {

class user;

typedef struct _user__isset {
  _user__isset() : id(false), name(false), score(false) {}
  bool id :1;
  bool name :1;
  bool score :1;
} _user__isset;

class user : public virtual ::apache::thrift::TBase {
 public:

  user(const user&);
  user& operator=(const user&);
  user() : id(0), name(), score(0) {
  }

  virtual ~user() noexcept;
  int32_t id;
  std::string name;
  int32_t score;

  _user__isset __isset;

  void __set_id(const int32_t val);

  void __set_name(const std::string& val);

  void __set_score(const int32_t val);

  bool operator == (const user & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(score == rhs.score))
      return false;
    return true;
  }
  bool operator != (const user &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const user & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(user &a, user &b);

std::ostream& operator<<(std::ostream& out, const user& obj);

} // namespace

#endif
