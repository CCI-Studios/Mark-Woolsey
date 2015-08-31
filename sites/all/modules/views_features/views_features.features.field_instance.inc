<?php
/**
 * @file
 * views_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function views_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_address_mls'
  $field_instances['drealty_listing-basic_drealty_listing-field_address_mls'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'ADDRESS - ADDRESS',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'ADDRESS - ADDRESS',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_address_mls',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_bathrooms_mls'
  $field_instances['drealty_listing-basic_drealty_listing-field_bathrooms_mls'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'BathsTotal - Baths Total',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_bathrooms_mls',
    'label' => 'Bathrooms',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_bedrooms_mls'
  $field_instances['drealty_listing-basic_drealty_listing-field_bedrooms_mls'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'Bedrooms - Total Number of Bedrooms',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_bedrooms_mls',
    'label' => 'Bedrooms',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_counter_id'
  $field_instances['drealty_listing-basic_drealty_listing-field_counter_id'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'COUNTER - Primary Key',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'COUNTER - Primary Key',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_counter_id',
    'label' => 'counter id',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_description'
  $field_instances['drealty_listing-basic_drealty_listing-field_description'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'REMKS - REMKS',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_gararge'
  $field_instances['drealty_listing-basic_drealty_listing-field_gararge'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'GARAGE - GARAGE',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_gararge',
    'label' => 'Gararge',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_images'
  $field_instances['drealty_listing-basic_drealty_listing-field_images'] = array(
    'bundle' => 'basic_drealty_listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_mls_number'
  $field_instances['drealty_listing-basic_drealty_listing-field_mls_number'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'MLSNUM - MLSNUM',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'MLSNUM - MLSNUM',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_mls_number',
    'label' => 'Mls number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_photo_count'
  $field_instances['drealty_listing-basic_drealty_listing-field_photo_count'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'PHOTO_COUNT - Number of Photos',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_photo_count',
    'label' => 'Photo count',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_place'
  $field_instances['drealty_listing-basic_drealty_listing-field_place'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'CITY - CITY',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'PROREF - Property Know As / Body of Water / Waterfront Name',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_place',
    'label' => 'Place',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_postal_code'
  $field_instances['drealty_listing-basic_drealty_listing-field_postal_code'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'PROPCODE - Postal Code',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'PROPCODE - Postal Code',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_postal_code',
    'label' => 'Postal Code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_price_mls1'
  $field_instances['drealty_listing-basic_drealty_listing-field_price_mls1'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'LPRICE - LPRICE',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'ListPrice - Listing Price',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_price_mls1',
    'label' => 'Price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_property_size_mls'
  $field_instances['drealty_listing-basic_drealty_listing-field_property_size_mls'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'PROPERTY_TYPE - PROPERTY_TYPE',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'LOTSIZE - LOTSIZE',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_property_size_mls',
    'label' => 'Property Size',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_province'
  $field_instances['drealty_listing-basic_drealty_listing-field_province'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'PROVINCE - PROVINCE',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'StateOrProvince - Province of street address',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_province',
    'label' => 'Province',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_type_list'
  $field_instances['drealty_listing-basic_drealty_listing-field_type_list'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 12,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'PROPERTY_TYPE - PROPERTY_TYPE',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'TYPE - TYPE',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_type_list',
    'label' => 'Type List',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'drealty_listing-basic_drealty_listing-field_type_mls'
  $field_instances['drealty_listing-basic_drealty_listing-field_type_mls'] = array(
    'bundle' => 'basic_drealty_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'drealty' => array(
      'hash_exclude' => 0,
      'mappings' => array(
        '1_2_OPEN' => array(
          'class_id' => 6,
          'conid' => 1,
          'rets_field' => '',
          'rid' => 2,
        ),
        '1_4_ALL' => array(
          'class_id' => 1,
          'conid' => 1,
          'rets_field' => 'PROPERTY_TYPE - PROPERTY_TYPE',
          'rid' => 4,
        ),
        '1_4_RES' => array(
          'class_id' => 3,
          'conid' => 1,
          'rets_field' => 'TYPE - TYPE',
          'rid' => 4,
        ),
      ),
    ),
    'entity_type' => 'drealty_listing',
    'field_name' => 'field_type_mls',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-home_slider-body'
  $field_instances['node-home_slider-body'] = array(
    'bundle' => 'home_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-home_slider-field_address_slider'
  $field_instances['node-home_slider-field_address_slider'] = array(
    'bundle' => 'home_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address_slider',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-home_slider-field_background_image'
  $field_instances['node-home_slider-field_background_image'] = array(
    'bundle' => 'home_slider',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_background_image',
    'label' => 'background image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-home_slider-field_price'
  $field_instances['node-home_slider-field_price'] = array(
    'bundle' => 'home_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_price',
    'label' => 'price',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-mls_listings-body'
  $field_instances['node-mls_listings-body'] = array(
    'bundle' => 'mls_listings',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-mls_listings-field_mlsnumber'
  $field_instances['node-mls_listings-field_mlsnumber'] = array(
    'bundle' => 'mls_listings',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mlsnumber',
    'label' => 'Mls number',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-open_houses-body'
  $field_instances['node-open_houses-body'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_address'
  $field_instances['node-open_houses-field_address'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_bathrooms'
  $field_instances['node-open_houses-field_bathrooms'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bathrooms',
    'label' => 'Bathrooms',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_bedrooms'
  $field_instances['node-open_houses-field_bedrooms'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bedrooms',
    'label' => 'Bedrooms',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_date'
  $field_instances['node-open_houses-field_date'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_garage'
  $field_instances['node-open_houses-field_garage'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_garage',
    'label' => 'Garage',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_img'
  $field_instances['node-open_houses-field_img'] = array(
    'bundle' => 'open_houses',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'detail_image',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_img',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 1,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'listing_image' => 'listing_image',
        ),
        'manualcrop_styles_list' => array(
          'listing_image' => 'listing_image',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_lease_rate'
  $field_instances['node-open_houses-field_lease_rate'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lease_rate',
    'label' => 'Price',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_other_images'
  $field_instances['node-open_houses-field_other_images'] = array(
    'bundle' => 'open_houses',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_images',
    'label' => 'other Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 1,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'other_images' => 'other_images',
        ),
        'manualcrop_styles_list' => array(
          'other_images' => 'other_images',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_property_size'
  $field_instances['node-open_houses-field_property_size'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_property_size',
    'label' => 'Property Size',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-open_houses-field_type'
  $field_instances['node-open_houses-field_type'] = array(
    'bundle' => 'open_houses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Bathrooms');
  t('Bedrooms');
  t('Body');
  t('Date');
  t('Description');
  t('Garage');
  t('Gararge');
  t('Image');
  t('Images');
  t('Mls number');
  t('Photo count');
  t('Place');
  t('Postal Code');
  t('Price');
  t('Property Size');
  t('Province');
  t('Type');
  t('Type List');
  t('background image');
  t('counter id');
  t('other Images');
  t('price');

  return $field_instances;
}
