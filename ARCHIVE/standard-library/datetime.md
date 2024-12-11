# datetime

## What is `datetime` module?

This module provides classes for manipulating dates and times.

## Key Classes

### `datetime.datetime`

Combination of a date and a time.

- `datetime.date`: Handles dates (year, month, day).
- `datetime.time`: Handles time (hour, minute, second, microsecond).
- `datetime.timedelta`: Represents a duration, the difference between two dates or times.
- `datetime.tzinfo`: Abstract base class for time zone information objects.
- `datetime.timezone`: A class that implements the `tzinfo` abstract base class as a fixed offset from the UTC.

## Key Features

- **Immutable Objects**: All datetime objects are immutable.
- **Thread Safety**: Safe for concurrent access.
- **Time Zone Support**: Built-in support for UTC and timezone awareness.
- **Arithmetic Operations**: Support for date/time calculations.
- **String Parsing/Formatting**: Flexible conversion between strings and datetime objects.
- **Compatible with SQL**: Easy to work with database timestamps.
- **Microsecond Precision**: High precision time handling.
