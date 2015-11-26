
## What is DKAN Feedback?

DKAN Feedback is a module allow users and visitors to add feedback on the published data. Published feedbacks can be up voted or down voted using the vote api.

## Requirements

* Dkan install. We do use undeclared dependencies used in core Dkan, for example
  the dataset and resource content types, features_role_export...
* All external dependencies other then core Dkan are incapsulated in the
`dkan_feedback.make` file. This includes
[rate](https://www.drupal.org/project/rate) and related modules
([Voting API](https://www.drupal.org/project/votingapi) for
the content moderation features, [Captcha](https://www.drupal.org/project/captcha) captcha to avoid spam feedback.)

## Installation

This module needs to be [built using drush
make](https://github.com/NuCivic/nucivic-process/wiki/Using-drush-make-in-individual-modules)
before being enabled. If you download only the module you will miss key
dependencies for required modules and libraries.

To install:
```
cd <path to modules directory>
git clone https://github.com/NuCivic/dkan_feedback
drush make --no-core <path to modules directory>/dkan_feedback/dkan_feedback.make
drush en dkan_feedback
```

## Documentation

We are working on improving this documentation. Please let us know if you have
any questions in the mean time.

## Contributing

Please follow the (Ticket Template)[https://github.com/NuCivic/dkan/blob/7.x-1.x/CONTRIBUTING.md#new-feature-template] when creating new tickets.

Also, please remember to reference the issue across repositories in order for maintainers to pick up commits and pull requests looking at the issue. You can do that for commits like this:

```bash
git commit -m "Issue NuCivic/dkan_feedback#<issue_number>: ..."
```

Just replace **<issue_number>** with the actual issue number. You can reference pull requests exactly like that if you add the same text **"NuCivic/dkan_feedback#<issue_number>"** in a comment.

This really help us detecting changes and pulling them in in faster.
