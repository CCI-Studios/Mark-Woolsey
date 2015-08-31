<?php
/**
 * @file
 * views_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'deatils_mls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Deatils mls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Drealty Listing: Mls number */
  $handler->display->display_options['fields']['field_mls_number']['id'] = 'field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['table'] = 'field_data_field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['field'] = 'field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['label'] = '';
  $handler->display->display_options['fields']['field_mls_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mls_number']['element_label_colon'] = FALSE;
  /* Field: Mls number */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Mls number';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div><p>MLS Listing [field_mls_number] </p></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'mls-number';
  /* Field: Drealty Listing: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Drealty Listing: Address */
  $handler->display->display_options['fields']['field_address_mls']['id'] = 'field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['table'] = 'field_data_field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['field'] = 'field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['exclude'] = TRUE;
  /* Field: Drealty Listing: Place */
  $handler->display->display_options['fields']['field_place']['id'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['table'] = 'field_data_field_place';
  $handler->display->display_options['fields']['field_place']['field'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['exclude'] = TRUE;
  /* Field: Drealty Listing: Price */
  $handler->display->display_options['fields']['field_price_mls1']['id'] = 'field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['table'] = 'field_data_field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['field'] = 'field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price_mls1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Postal Code */
  $handler->display->display_options['fields']['field_postal_code']['id'] = 'field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['table'] = 'field_data_field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['field'] = 'field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['exclude'] = TRUE;
  /* Field: Drealty Listing: Property Size */
  $handler->display->display_options['fields']['field_property_size_mls']['id'] = 'field_property_size_mls';
  $handler->display->display_options['fields']['field_property_size_mls']['table'] = 'field_data_field_property_size_mls';
  $handler->display->display_options['fields']['field_property_size_mls']['field'] = 'field_property_size_mls';
  $handler->display->display_options['fields']['field_property_size_mls']['exclude'] = TRUE;
  /* Field: Drealty Listing: Gararge */
  $handler->display->display_options['fields']['field_gararge']['id'] = 'field_gararge';
  $handler->display->display_options['fields']['field_gararge']['table'] = 'field_data_field_gararge';
  $handler->display->display_options['fields']['field_gararge']['field'] = 'field_gararge';
  $handler->display->display_options['fields']['field_gararge']['exclude'] = TRUE;
  /* Field: Drealty Listing: Bathrooms */
  $handler->display->display_options['fields']['field_bathrooms_mls']['id'] = 'field_bathrooms_mls';
  $handler->display->display_options['fields']['field_bathrooms_mls']['table'] = 'field_data_field_bathrooms_mls';
  $handler->display->display_options['fields']['field_bathrooms_mls']['field'] = 'field_bathrooms_mls';
  $handler->display->display_options['fields']['field_bathrooms_mls']['exclude'] = TRUE;
  /* Field: Drealty Listing: Type */
  $handler->display->display_options['fields']['field_type_mls']['id'] = 'field_type_mls';
  $handler->display->display_options['fields']['field_type_mls']['table'] = 'field_data_field_type_mls';
  $handler->display->display_options['fields']['field_type_mls']['field'] = 'field_type_mls';
  $handler->display->display_options['fields']['field_type_mls']['label'] = '';
  $handler->display->display_options['fields']['field_type_mls']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_mls']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Bedrooms */
  $handler->display->display_options['fields']['field_bedrooms_mls']['id'] = 'field_bedrooms_mls';
  $handler->display->display_options['fields']['field_bedrooms_mls']['table'] = 'field_data_field_bedrooms_mls';
  $handler->display->display_options['fields']['field_bedrooms_mls']['field'] = 'field_bedrooms_mls';
  $handler->display->display_options['fields']['field_bedrooms_mls']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="right">
<div class="field-name-field-lease-rate">$[field_price_mls1]</div>
<div class="views-field"><span class="views-label">Address:</span><span>[field_address_mls] <br>
<span>[field_place], [field_province] [field_postal_code]</span></div> 
<div class="views-field"><span class="views-label">Property Size:</span>[field_property_size_mls]</div>
<div class="views-field views-field-type"><span  class="views-label">Type:</span>[field_type_mls]</div>
<div class="views-field"><span  class="views-label">Bathrooms:</span>[field_bathrooms_mls]</div>
<div class="views-field"><span  class="views-label">Bedrooms:</span>[field_bedrooms_mls]</div>
<div class="views-field"><span  class="views-label">Garage:</span>[field_gararge]</div>
</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Contextual filter: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'basic_drealty_listing';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'mls-details';
  $export['deatils_mls'] = $view;

  $view = new view();
  $view->name = 'details_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Details page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Details page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => 'detail_image',
    'image_link' => '',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  /* Field: Content: Property Size */
  $handler->display->display_options['fields']['field_property_size']['id'] = 'field_property_size';
  $handler->display->display_options['fields']['field_property_size']['table'] = 'field_data_field_property_size';
  $handler->display->display_options['fields']['field_property_size']['field'] = 'field_property_size';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  /* Field: Content: Bathrooms */
  $handler->display->display_options['fields']['field_bathrooms']['id'] = 'field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['table'] = 'field_data_field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['field'] = 'field_bathrooms';
  $handler->display->display_options['fields']['field_bathrooms']['label'] = '';
  $handler->display->display_options['fields']['field_bathrooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bathrooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bedrooms */
  $handler->display->display_options['fields']['field_bedrooms']['id'] = 'field_bedrooms';
  $handler->display->display_options['fields']['field_bedrooms']['table'] = 'field_data_field_bedrooms';
  $handler->display->display_options['fields']['field_bedrooms']['field'] = 'field_bedrooms';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Garage */
  $handler->display->display_options['fields']['field_garage']['id'] = 'field_garage';
  $handler->display->display_options['fields']['field_garage']['table'] = 'field_data_field_garage';
  $handler->display->display_options['fields']['field_garage']['field'] = 'field_garage';
  $handler->display->display_options['fields']['field_garage']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'open_houses' => 'open_houses',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'details-page/%1';
  $export['details_page'] = $view;

  $view = new view();
  $view->name = 'front_page_listings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Front page listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front page listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/mls">View All Listings</a>';
  /* Field: Drealty Listing: Address */
  $handler->display->display_options['fields']['field_address_mls']['id'] = 'field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['table'] = 'field_data_field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['field'] = 'field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['label'] = '';
  $handler->display->display_options['fields']['field_address_mls']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_mls']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'listing_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Drealty Listing: Mls number */
  $handler->display->display_options['fields']['field_mls_number']['id'] = 'field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['table'] = 'field_data_field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['field'] = 'field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['label'] = '';
  $handler->display->display_options['fields']['field_mls_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mls_number']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Place */
  $handler->display->display_options['fields']['field_place']['id'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['table'] = 'field_data_field_place';
  $handler->display->display_options['fields']['field_place']['field'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['label'] = '';
  $handler->display->display_options['fields']['field_place']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Postal Code */
  $handler->display->display_options['fields']['field_postal_code']['id'] = 'field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['table'] = 'field_data_field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['field'] = 'field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_postal_code']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Price */
  $handler->display->display_options['fields']['field_price_mls1']['id'] = 'field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['table'] = 'field_data_field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['field'] = 'field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['label'] = '';
  $handler->display->display_options['fields']['field_price_mls1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price_mls1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_mls1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Address */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Address';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=views-field-field-address><p>[field_address_mls]
[field_place]<br>[field_province]  [field_postal_code]</p></div>
<div class="views-field-field-lease-rate"><span class="views-label">Price:</span>$[field_price_mls1]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/mls-details/[id]" class="blue-button">More Details</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['front_page_listings'] = $view;

  $view = new view();
  $view->name = 'home_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'home_slider' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: background image */
  $handler->display->display_options['fields']['field_background_image']['id'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['table'] = 'field_data_field_background_image';
  $handler->display->display_options['fields']['field_background_image']['field'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['label'] = '';
  $handler->display->display_options['fields']['field_background_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_background_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address_slider']['id'] = 'field_address_slider';
  $handler->display->display_options['fields']['field_address_slider']['table'] = 'field_data_field_address_slider';
  $handler->display->display_options['fields']['field_address_slider']['field'] = 'field_address_slider';
  $handler->display->display_options['fields']['field_address_slider']['label'] = '';
  $handler->display->display_options['fields']['field_address_slider']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_slider']['element_label_colon'] = FALSE;
  /* Field: Content: price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="inner-body">
 <div class="address">[field_address_slider] </div>
<div class="price">[field_price]</div>
</div>
<div class="view-more"><a href="/mls" class="white-button">View Listing</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'home_slider' => 'home_slider',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['home_slider'] = $view;

  $view = new view();
  $view->name = 'mls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Mls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mls Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<< Previous Page';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next Page > >';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There is no result for your search';
  /* Field: Drealty Listing: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'listing_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Drealty Listing: Address */
  $handler->display->display_options['fields']['field_address_mls']['id'] = 'field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['table'] = 'field_data_field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['field'] = 'field_address_mls';
  $handler->display->display_options['fields']['field_address_mls']['label'] = '';
  $handler->display->display_options['fields']['field_address_mls']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_mls']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Postal Code */
  $handler->display->display_options['fields']['field_postal_code']['id'] = 'field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['table'] = 'field_data_field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['field'] = 'field_postal_code';
  $handler->display->display_options['fields']['field_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_postal_code']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Place */
  $handler->display->display_options['fields']['field_place']['id'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['table'] = 'field_data_field_place';
  $handler->display->display_options['fields']['field_place']['field'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['label'] = '';
  $handler->display->display_options['fields']['field_place']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place']['alter']['text'] = '[field_place],';
  $handler->display->display_options['fields']['field_place']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Price */
  $handler->display->display_options['fields']['field_price_mls1']['id'] = 'field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['table'] = 'field_data_field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['field'] = 'field_price_mls1';
  $handler->display->display_options['fields']['field_price_mls1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price_mls1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Address */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Address';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class=views-field-field-address><p>[field_address_mls]
[field_place]<br>[field_province]  [field_postal_code]</p></div>
<div class="views-field-field-lease-rate"><span class="views-label">Price:</span>$[field_price_mls1]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Details';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/mls-details/[id]" class="blue-button">More Details</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'basic_drealty_listing';
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Drealty Listing: Type List (field_type_list) */
  $handler->display->display_options['filters']['field_type_list_value']['id'] = 'field_type_list_value';
  $handler->display->display_options['filters']['field_type_list_value']['table'] = 'field_data_field_type_list';
  $handler->display->display_options['filters']['field_type_list_value']['field'] = 'field_type_list_value';
  $handler->display->display_options['filters']['field_type_list_value']['group'] = 1;
  $handler->display->display_options['filters']['field_type_list_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_list_value']['expose']['operator_id'] = 'field_type_list_value_op';
  $handler->display->display_options['filters']['field_type_list_value']['expose']['label'] = 'Property Type';
  $handler->display->display_options['filters']['field_type_list_value']['expose']['operator'] = 'field_type_list_value_op';
  $handler->display->display_options['filters']['field_type_list_value']['expose']['identifier'] = 'field_type_list_value';
  $handler->display->display_options['filters']['field_type_list_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Drealty Listing: Bedrooms (field_bedrooms_mls) */
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['id'] = 'field_bedrooms_mls_value';
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['table'] = 'field_data_field_bedrooms_mls';
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['field'] = 'field_bedrooms_mls_value';
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['group'] = 1;
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['expose']['operator_id'] = 'field_bedrooms_mls_value_op';
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['expose']['label'] = 'Bedrooms';
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['expose']['operator'] = 'field_bedrooms_mls_value_op';
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['expose']['identifier'] = 'field_bedrooms_mls_value';
  $handler->display->display_options['filters']['field_bedrooms_mls_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Drealty Listing: Bathrooms (field_bathrooms_mls) */
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['id'] = 'field_bathrooms_mls_value';
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['table'] = 'field_data_field_bathrooms_mls';
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['field'] = 'field_bathrooms_mls_value';
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['group'] = 1;
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['expose']['operator_id'] = 'field_bathrooms_mls_value_op';
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['expose']['label'] = 'Bathrooms';
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['expose']['operator'] = 'field_bathrooms_mls_value_op';
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['expose']['identifier'] = 'field_bathrooms_mls_value';
  $handler->display->display_options['filters']['field_bathrooms_mls_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Min price */
  $handler->display->display_options['filters']['field_price_mls1_value']['id'] = 'field_price_mls1_value';
  $handler->display->display_options['filters']['field_price_mls1_value']['table'] = 'field_data_field_price_mls1';
  $handler->display->display_options['filters']['field_price_mls1_value']['field'] = 'field_price_mls1_value';
  $handler->display->display_options['filters']['field_price_mls1_value']['ui_name'] = 'Min price';
  $handler->display->display_options['filters']['field_price_mls1_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_price_mls1_value']['group'] = 1;
  $handler->display->display_options['filters']['field_price_mls1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_mls1_value']['expose']['operator_id'] = 'field_price_mls1_value_op';
  $handler->display->display_options['filters']['field_price_mls1_value']['expose']['label'] = 'Min Price';
  $handler->display->display_options['filters']['field_price_mls1_value']['expose']['operator'] = 'field_price_mls1_value_op';
  $handler->display->display_options['filters']['field_price_mls1_value']['expose']['identifier'] = 'field_price_mls1_value';
  $handler->display->display_options['filters']['field_price_mls1_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: MAx Price */
  $handler->display->display_options['filters']['field_price_mls1_value_1']['id'] = 'field_price_mls1_value_1';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['table'] = 'field_data_field_price_mls1';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['field'] = 'field_price_mls1_value';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['ui_name'] = 'MAx Price';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_price_mls1_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_mls1_value_1']['expose']['operator_id'] = 'field_price_mls1_value_1_op';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['expose']['label'] = 'Max Price';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['expose']['operator'] = 'field_price_mls1_value_1_op';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['expose']['identifier'] = 'field_price_mls1_value_1';
  $handler->display->display_options['filters']['field_price_mls1_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'mls';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Listings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['mls'] = $view;

  $view = new view();
  $view->name = 'mls_listing_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Mls listing images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mls listing images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Previous */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['ui_name'] = 'Previous';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="#" class="prev">Previous</a>';
  /* Footer: Next */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['ui_name'] = 'Next';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="#" class="next">Next</a>';
  /* Field: Image url */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['ui_name'] = 'Image url';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Drealty Listing: Images */
  $handler->display->display_options['fields']['field_images_1']['id'] = 'field_images_1';
  $handler->display->display_options['fields']['field_images_1']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images_1']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images_1']['settings'] = array(
    'image_style' => 'other_images',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images_1']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_images]" class="swipebox">[field_images_1]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'basic_drealty_listing';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['mls_listing_images'] = $view;

  $view = new view();
  $view->name = 'open_houses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Open Houses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Open Houses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => 'listing_image',
    'image_link' => 'file',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_lease_rate']['id'] = 'field_lease_rate';
  $handler->display->display_options['fields']['field_lease_rate']['table'] = 'field_data_field_lease_rate';
  $handler->display->display_options['fields']['field_lease_rate']['field'] = 'field_lease_rate';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Details';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More Details';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'open_houses' => 'open_houses',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'open-houses';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Open Houses';
  $handler->display->display_options['menu']['description'] = 'open houses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['open_houses'] = $view;

  $view = new view();
  $view->name = 'other_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Left Arrow */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Left Arrow';
  $handler->display->display_options['header']['area']['content'] = '<a href="#" id="prev">Left arrow</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Right Arrow */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'Right Arrow';
  $handler->display->display_options['footer']['area']['content'] = '<a href="#" id="next">next arrow</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Image url */
  $handler->display->display_options['fields']['field_other_images']['id'] = 'field_other_images';
  $handler->display->display_options['fields']['field_other_images']['table'] = 'field_data_field_other_images';
  $handler->display->display_options['fields']['field_other_images']['field'] = 'field_other_images';
  $handler->display->display_options['fields']['field_other_images']['ui_name'] = 'Image url';
  $handler->display->display_options['fields']['field_other_images']['label'] = '';
  $handler->display->display_options['fields']['field_other_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_images']['alter']['text'] = '<a href="[field_other_images]" class="swipebox">[field_other_images]</a>';
  $handler->display->display_options['fields']['field_other_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_other_images']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_other_images']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_other_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_other_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_other_images']['separator'] = '';
  /* Field: custom */
  $handler->display->display_options['fields']['field_other_images_1']['id'] = 'field_other_images_1';
  $handler->display->display_options['fields']['field_other_images_1']['table'] = 'field_data_field_other_images';
  $handler->display->display_options['fields']['field_other_images_1']['field'] = 'field_other_images';
  $handler->display->display_options['fields']['field_other_images_1']['ui_name'] = 'custom';
  $handler->display->display_options['fields']['field_other_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_other_images_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other_images_1']['alter']['text'] = '<a href="[field_other_images]" class="swipebox">[field_other_images_1] </a>';
  $handler->display->display_options['fields']['field_other_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_other_images_1']['settings'] = array(
    'image_style' => 'other_images',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_other_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_other_images_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'open_houses' => 'open_houses',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['other_images'] = $view;

  return $export;
}
